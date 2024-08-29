/*Сохранять информацию о книгах в файлах
Записывать информацию о книгах через структуру
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
char ArchiveFile[100];

struct Book
{
    int index;
    char author[100];
    char title[100];
    int yearOfPublication;
} item;

int CreateFile(char *file)
{
    FILE *CreateArchiveFile, *CheckArchiveFile = fopen(file, "r");

    if(CheckArchiveFile)
    {
        printf("[-] File: [%s] already exists\n", file);
        return 1;
    }

    if(!(CreateArchiveFile  = fopen(file, "w")))
    {
            perror("");
            return 1;
    }
    printf("[+] File: %s was created \n", file);
    strcpy(ArchiveFile, file);
    return 0;
}

int PrintHelp()
{
    char *help =
    "command description\n"
    "======= ==========="
    "c       create new book and write it to the archive file\n"
    "f       check out an existing book\n"
    "d       delete an existing book\n"
    "e       exit from program\n";
    printf("%s", help);
    return 0;
}

int ShowAllLines()
{
    return 0;
}

int GenerateIndex()
{
    srand(time(NULL));
    return rand() % (9999 + 1 - 1111) + 1111;
}

int CreateBook()
{
    printf("CreateBook() functiion\n");
    return 0;
}

int FindBook()
{
    return 0;
}

int DeleteBook()
{
    return 0;
}

int EditBook()
{
    return 0;
}

int main()
{
    char command[1];
    while(1)
    {
        printf("command>>");
        scanf("%s", command);
        if(!(strcmp(command, "c")))
        {
            CreateBook();

        }
        else if(!(strcmp(command, "h")))
        {
            PrintHelp();

        }
        else {
            continue;
        }
    }

    return 0;
}
