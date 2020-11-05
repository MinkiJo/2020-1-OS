#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
int main(int argc, char**argv)
{	
	
	char buf[MAX];
	printf("myshell ver1.0\n");
	while(1)
	{
			memset(buf,0x00,MAX); 	
			scanf("%s",buf);			
			char a[MAX],b[MAX]; 
			
			if(strcmp(buf,"exit") == 0) exit(0);

			pid_t pid=fork();	
			if(pid ==0){			
			
			  if(strcmp(buf,"./sum") == 0){	
				scanf("%s %s",a,b);
				char*args[] = {buf,a,b,NULL};
	    	
	   			execv(args[0], args);	
				}
			  else if(strcmp(buf,"./sub") == 0){
				scanf("%s %s",a,b);
				char*args[] = {buf,a,b,NULL};		    	
	   			execv(args[0], args);	exit(0);
				}
			  else if(strcmp(buf,"./div") == 0){		    	
				scanf("%s %s",a,b);
				char*args[] = {buf,a,b,NULL};
	   			execv(args[0], args); exit(0);			
				}
			  else if(strcmp(buf, "./fact") == 0){
				scanf("%s",a);
				char*args[] = {buf,a,NULL};		    	
	   			execv(args[0], args); exit(0);
				}
			else exit(0);
			
			
			 }
			if(pid>0){
				wait(NULL);
				
					
			}
	
	}

}

