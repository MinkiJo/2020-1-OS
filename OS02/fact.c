#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
	int fac = atoi(argv[1]);
	int result=1, n=1;
	
	printf("구하고자 하는 값은 %d!입니다\n", fac);
	while(fac--){
		result = result*n;
		n++;
	}


	printf("팩토리얼 값은 %d 입니다\n", result);
	return 0;
} 


	
	


