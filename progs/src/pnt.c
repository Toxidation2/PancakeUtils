//pnt - a lightweight and powerful GNU 'cat' replacement
//2021, the PancakeUtils team

#include <stdio.h>
#include <stdlib.h> // For exit()  

int main(int args, char** argi)
{
	int tempcnt; //We will use this later to count command line arguments.
    	FILE *input;
	char filename[100], c;
	if (args==1) //Check for command line arguments
    	{
        	printf("pnt: No input files! Please specify at least one. For help, type -h.");
        	exit(0);
    	}
  	if (args>=2)
	{
	for(tempcnt=1;tempcnt<args;tempcnt++) 
	   	input = fopen(argi[tempcnt], "r");
		 c = fgetc(input);
         while (c != EOF)
        {       
              printf ("%c", c);
              c = fgetc(input);
        }

        fclose(input);
	}
    	// Read contents from file
    	c = fgetc(input);
    	while (c != EOF)
    	{
        	printf ("%c", c);
        	c = fgetc(input);
    	}
  
    	fclose(input);
    	return 0;
}

