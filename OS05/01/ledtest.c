#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char** argv)
{
	char num[10];
    char buf[BUFSIZ];
    char i = 0;
    int fd = -1;

    memset(buf, 0, BUFSIZ);
	char type;
	printf("enter the type(A or B) : ");
	scanf("%c", &type);
    printf("GPIO Set : %c\n", type);
	if(type =='A')
	{	
		fd = open("/dev/ledtest", O_RDWR); /* GPIO 디바이스 파일을 연다. */
		for(int i= 0;i<3;i++)
		{
			write(fd,"1", 1); /* 커널 모듈에 데이터를 쓴다. */			
			usleep(500000);	//0.5sec wait
			write(fd,"0", 1); /* 커널 모듈에 데이터를 쓴다. */
			usleep(500000);	
			
		}
		close(fd); /* 사용이 끝난 디바이스 파일을 닫는다. */	
	}
	else if(type == 'B')
	{
			
		fd = open("/dev/ledtest", O_RDWR); /* GPIO 디바이스 파일을 연다. */
		while(1){	
			printf("enter numbur(0 or 1) : ");
			scanf("%s", &num);
			write(fd, num, strlen(num)); /* 커널 모듈에 데이터를 쓴다. */
			read(fd, buf, strlen(num)); /* 커널로부터 데이터를 읽는다. */
			printf("Read data : %s\n", buf); /* 읽은 데이터를 화면에 출력한다. */    
    	
		}
		close(fd); /* 사용이 끝난 디바이스 파일을 닫는다. */	
	}


    return 0;
}
