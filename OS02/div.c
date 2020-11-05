#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	
	printf("두 수를 나눈 몫은 %d이고 나머지는 %d 입니다\n",(a/b),(a%b));
	return 0;
} 

