#include<stdio.h>
#include<unistd.h>
int main()
{
	int process_id;
	process_id=getpid();
	printf("process_id=%d",getpid());
	return 0;	
}
