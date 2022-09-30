//Read file using File Managment in C
#include <stdio.h>
int main()
{
    long long int n;
    char c;
    FILE *fptr;
    fptr = fopen("ALPHABETS.txt", "r");
    if (fptr == NULL)
    {
        printf("This file does not exist\n");
    }
    fseek(fptr, 0, 2);
    n = ftell(fptr);
    int i = 0;
    while (i < n)
    {
        i++;
        fseek(fptr, -i, 2);
        c = fgetc(fptr);
        printf("%c", c);
    }
    rewind(fptr);
    return 0;
}