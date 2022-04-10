#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef VERSION
    #define VERSION "1.0"
#endif

void help()
{
    printf("\
    Usage: no [STRING]...\n\
           no OPTION\n\n\
    It says no \n\n\
    OPTIONS:\n\
            --help      Shows you this\n\
            --version   Shows you the version\n");
}

int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        for (int i = 0; i < argc; i++)
        {
            if (!strcmp(argv[i + 1], "--help"))
            {
                help();
                return 0;
            } 
            if (!strcmp(argv[i + 1], "--version"))
            {
                printf("%s\n", VERSION);
                return 0; 
            }
            printf("no: unrecognised option '%s' \n", argv[i + 1]);
            printf("Try 'no --help' for information\n");
            return 0;
        }
    }

    system("clear");
    printf("no\n");
}
