#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
    //int i = 0;

    if (argc == 1) 
    {
        printf("You only have one argument. You suck.\n");
    } 
    
    else if (argc > 1 && argc < 4) 
    {
        printf("Here are your arguments:\n");

        for (int i = 0; i < argc; i++) 
        {          
            for ( int j = 0; j < strlen(argv[i]); j++)
            {
            printf("%c \n", argv[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    } 
    
    else 
    {
        printf("You have too many arguments. You suck.\n");
    }

    return 0;
}