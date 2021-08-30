//pnt - a lightweight and powerful GNU 'cat' replacement
//2021, the PancakeUtils team

#include <stdio.h>
#include <stdlib.h> // For exit() 
#include <string.h> //For cmd-line arguments
int main(int argc, char* argv[])
{ 
    int linecnt=0;
    if(argc==1)
    {
    printf("pnt: No input files! Please specify at least one. For help, type -h.");
    exit(0);
    }
    if(argc==2)
    {
    char const* const fileName = argv[1]; 
    /* Sadly, we need to use an if/else ladder. */
    if(strcmp(fileName, "-h") == 0)
    {
    printf("Opened help\n");
    exit(0);
    }
    
    }
    char const* const fileName = argv[1];
    FILE* file = fopen(fileName, "r"); 
    char line[256];

   while (fgets(line, sizeof(line), file)) {
	   linecnt++;
	   printf("%d: %s",linecnt, line); 
    }
    fclose(file);

    return 0;
}
