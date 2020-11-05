#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

volatile int a;

void* sum()
{
	for(int i=0;i<10;i++)//10번씩 반복

	{
	a = a+1;
	}
	pthread_exit((void*)NULL);
}
void* sub()
{
	for(int i=0;i<10;i++)	{
	a = a-1;
	}
	pthread_exit((void*)NULL);
}


int main(int argc, char*argv[])
{	
	a = atoi(argv[1]);
	int N=30, n=5000;
	
	pthread_t thread1[5000];
	pthread_t thread2[5000];
	int ret1, ret2;

	
	for(int i=0;i<30;i++)
{
	for(int i=0;i<5000;i++)
	{
		{
			if(ret1=pthread_create(&thread1[i],NULL,sum,NULL)== 0){
				//printf("pthread1 create\n");
			}
			else{
				printf("thread 1 error");
				exit(1);
			}

			if(ret2=pthread_create(&thread2[i],NULL,sub,NULL)==0){
				//printf("pthread2 create\n");
			}
			else{
				printf("thread 2 error");
				exit(1);		
			}
			
		
		}
	}
	for(int i=0;i<5000;i++)
	{
	pthread_join(thread1[i],NULL);
	pthread_join(thread2[i],NULL);

	}
	printf("a결과:%d\n",a);
}
		

}



