//pnt - a lightweight and powerful GNU 'cat' replacement
//2021, the PancakeUtils team

#include <stdio.h>
#include <stdlib.h> // For exit() 
#include <string.h> //For cmd-line arguments
#include <unistd.h> //For testing if files exist
int main(int argc, char* argv[])
{ 
    int numlines=0; //For later use.
    int linecnt=0; //For later use.
    if(argc==1) //Check if arguments are specified, if not, exit.
    {
    printf("pnt: No input files! Please specify at least one. For help, type -h.\n");
    exit(0);
    }
    if(argc>1)
    {
    char const* const fileName = argv[1]; 
    /* Sadly, we need to use an if/else ladder. */
    if(strcmp(fileName, "-h") == 0) //Check for command line arguments.
    {
    printf("pnt from PancakeUtils\n");
    printf("\n");
    printf("-h		Opens this help menu\n");
    printf("-n		Number all output lines\n");
    exit(0);
    }
    else if(strcmp(fileName, "-n") == 0)
    {
    numlines = 1;
    }
    
  
    }
    
    if(argc == 2)
    {
    char const* const fileName = argv[1];
        FILE* file = fopen(fileName, "r");
    char line[256];

   while (fgets(line, sizeof(line), file)) {
           linecnt++;
           if(numlines == 1)
           {
           printf("%d: %s",linecnt, line);
           }
           else
           {
           printf("%s", line);
           }
    }
    fclose(file);

    return 0;
    }
    if(argc>2)
    {
    char const* const fileName = argv[1];
    if( access( fileName, F_OK ) == 0 ) {
     FILE* file = fopen(fileName, "r");
    char line[256];

   while (fgets(line, sizeof(line), file)) {
           linecnt++;
           if(numlines == 1)
           {
           printf("%d: %s",linecnt, line);
           }
           else
           {
           printf("%s", line);
           }
   }
   fclose(file);

   return 0;
    } else {
    char const* const fileName = argv[2];
    if( access( fileName, F_OK ) == 0 ) {
     FILE* file = fopen(fileName, "r");
    char line[256];

   while (fgets(line, sizeof(line), file)) {
           linecnt++;
           if(numlines == 1)
           {
           
	   printf("%d: %s",linecnt, line);
           }
	   else
	   {           
           printf("%s", line);
           }
   }
   fclose(file);

   return 0;
    printf("File not found. %s \n", fileName);
    return 1;
    }
    }   

    return 0;

    }
}
