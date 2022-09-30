//Program for open and read file and print it to another file using File Managment in C.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr1,*ptr2;
    char file1[10], z, file2[10];
    printf("Enter the name of file you want to read\n");
    scanf("%s", file1);
    ptr1 = fopen(file1, "r");
    if (ptr1 == NULL)
    {
        printf("This file is empty\n");
        exit(0);
    }
    printf("Enter the name of file you want to read \n");
    scanf("%s", file2);
    ptr2 = fopen(file2, "w");
    z = fgetc(ptr1);
    while (!feof(ptr1))
    {
        fputc(z, ptr2);
        z = fgetc(ptr1);
    }
    if (ferror(ptr1))
    {
        printf("Error found in %s\n",file1);
        clearerr(ptr1);
    }

    if (ferror(ptr2))
    {
    printf("Error found in %s\n",file2);
    clearerr(ptr2);
    }
    printf("file has been succesfully printed to another file\n");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}