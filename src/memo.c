#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "memo.h"

int main(int argc, char *argv[])
{
    while (1)
    {
        char str1[] = "-h";
        char str2[] = "-i";
        char str3[] = "-a";
        char str4[] = "-s";
        char str5[] = "-d";
        
        int i;
        int b; 

        if (i = strcmp(str1, argv[1]) == 0)
            print_arguments();
        
        else if (i = strcmp(str2, argv[1]) == 0)
            initialize_file();
        
        else if (i = strcmp(str3, argv[1]) == 0)
            append_note();

        else if (i = strcmp(str4, argv[1]) == 0)
            search_file();
        
        else if (i = strcmp(str5, argv[1]) == 0)
            delete_entry();

        else
            printf("enter a valid argument\n");

        return 0;
    }
}

