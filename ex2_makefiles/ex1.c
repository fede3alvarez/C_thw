#include <stdio.h>

/* This is a comment */
int main(int argc, char *argv[])
{
    int distance = 100;

    //  this is also a comment
    printf("You are %d miles away.\n", distance);
    printf("but getting closer, ");
    printf("every %d days...\n", 5);
    printf("Maybe you'll get there, on a %d day", 4);

    return 0;
}