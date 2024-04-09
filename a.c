#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	for(int i=0;i<4;i++)
	{
		int rc=fork();
		if(rc<0)
		{
			fprintf(stderr,"fork failed\n");
			exit(1);
		}
		else if(rc==0)
		{
			printf("Child %d\n",i);
			break;
		}
		else
		{
			printf("Parent %d\n",i);
		}
	}
}
