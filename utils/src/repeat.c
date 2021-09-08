#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main(int args,char* argl[])
{
int i = 0; //Temporary for while loop
	if(args==1) //If only program name is specified
	{
		while(i==0)
		{
		printf("y\n");
		}
	}

int temp; //Counter for counting arguments
char tmpadd[1024];//Temporary string for adding input strings to it
char whitespace[2] = " "; //This is a whitespace.
	if(args>=2)
    	{
            for(temp=2;temp<args;temp++)
		{        
		sprintf(tmpadd, "%s ", argl[temp]);
		strcat(tmpadd,argl[temp]);	
		}		
		
		}
	    while(i==0)
	    	{
			
	    		printf("%s ", tmpadd);
	    		
		}

}



