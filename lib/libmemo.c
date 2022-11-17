#include <stdio.h>
#include <stdlib.h>

void print_arguments()
{
    printf("-h Show this help.\n\n-i Init a new empty database. For example:\n\tmemo -i \"memo.csv\"\n\tCreates a new empty database with the name \"memo.csv\"\n\n-a \"text to be appended\" will append the quoted text at the end of the database.\n\tmemo -a \"This message will be included at the end of the database\"\n\n-s Search and find specific entries in the database.\n\tmemo -s \"09-11-2022\" will show all entries at a this given date.\n\tmemo -s \"programming\" will show all entries containing the word\"programming\".\n\n-d Delete an entry in the database.\n\tmemo -d 123 will delete entry number 123.\n");
}

void initialize_file()
{
    printf("initializing new file\n");
}

void append_note()
{
    printf("appending text to file\n");
}

void search_file()
{
    printf("searching file\n");
}

void delete_entry()
{
    printf("deleting entry\n");
}