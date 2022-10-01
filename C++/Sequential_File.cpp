#include <stdio.h>
typedef struct
{
    int usn;
    char name[25];
    int m1, m2, m3;
} STD;
STD s;
void display(FILE *);
int search(FILE *, int);
int main()
{
    int i, n, usn_key, opn;
    FILE *fp;
    printf("\n How many Records ? \n");
    scanf("%d", &n);
    fp = fopen("stud.dat", "w");
    for (i = 0; i < n; i++)
    {
        printf("\nRead the Info for Student: %d (\tuser Id\t,name\t,ossp marks\t,DSF marks\t, DCN marks) \n", i + 1);
        scanf("%d%s%d%d%d", &s.usn, s.name, &s.m1, &s.m2, &s.m3);
        fwrite(&s, sizeof(s), 1, fp);
    }
    fclose(fp);
    fp = fopen("stud.dat", "r");
    do
    {
        printf("\nPress 1- Display\t 2- Search\t 3- Exit\t Your Option?\n");
        scanf("%d", &opn);
        switch (opn)
        {
        case 1:
            printf("\n Student Records in the File \n");
            printf("\nStud Id Student name\tossp\t\tDSF\t\tDCN\n");
            display(fp);
            break;
        case 2:
            printf("\n Read the USN of the student to be searched ?");
            scanf("%d", &usn_key);
            if (search(fp, usn_key))
            {
                printf("\n\n=+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
                printf("Success ! Record found in the file\n");
                printf("%d\t%s\t%d\t%d\t%d\n", s.usn, s.name, s.m1, s.m2, s.m3);
            }
            else
                printf(" Failure!! Record with USN %d not found\n", usn_key);
            printf("\n\n=+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
            break;
        case 3:
            printf(" Exit!! Press a key . . .");
            break;
        default:
            printf("\n\n=+++++++++++++++++++++++++++++++++++++++++++++++++++++++n\n");
            printf(" Invalid Option!!! Try again !!!\n");
            printf("\n\n=+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
            break;
        }
    } while (opn != 3);
    printf("\n=+++++++++++++++++++++++++++++++++++++++++++++++++++++++n");
    fclose(fp);
    return 0;
}
/* End of main() */
void display(FILE *fp)
{
    rewind(fp);
    while (fread(&s, sizeof(s), 1, fp))
        printf("%d\t%s\t\t%d\t\t%d\t\t%d\n", s.usn, s.name, s.m1, s.m2, s.m3);
    printf("\n\n=+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
}
int search(FILE *fp, int usn_key)
{
    rewind(fp);
    while (fread(&s, sizeof(s), 1, fp))
        if (s.usn == usn_key)
            return 1;
    return 0;
    printf("\n\n=+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
}
