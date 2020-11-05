#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
	if(argc <=2)
		{printf("다시 입력하세요\n");
		return 1;
		}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	
	printf("두 수의 합은 %d 입니다\n",a+b);
	return 0;
} 

