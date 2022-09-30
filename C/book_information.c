// Library Book Information Store By Using Union and Structure
#include <stdio.h>
struct library
{
    int bn;
    char title[50];
    char author[50];                        
    float price;                                    
};
union libraryuni
{
    int ubn;
    char utitle[50];
    char uauthor[50];
    float uprice;
}ub1;
int main()
{
    printf("BY USING STRUCTRE\n");
    struct library b1;
    printf("Enter the Number of Book : ");
    scanf("%d", &b1.bn);
    printf("Enter the title of book : ");
    fflush(stdin);
    gets(b1.title);
    printf("Enter the name of author : ");
    fflush(stdin);
    gets(b1.author);
    printf("Enter the price of book : ");
    scanf("%f", &b1.price);

    printf("\n");

    printf("Number of book is : %d\n", b1.bn);
    printf("Name of Book is : %s\n", b1.title);
    printf("Name of author is : %s\n", b1.author);
    printf("Price of book is : %.2f\n", b1.price);

    printf("\n BY USING UNION \n");

    union libraryuni ub1;
    printf("Enter the Number of Book : ");
    fflush(stdin);
    scanf("%d", &ub1.ubn);
    printf("Number of book is : %d\n", ub1.ubn);
    printf("Enter the name of book : ");
    fflush(stdin);
    scanf("%s",ub1.utitle);
    printf("Name of Book is : %s\n", ub1.utitle);
    printf("Enter the name of author : ");
    fflush(stdin);
    scanf("%s",ub1.uauthor);
    printf("Name of author is : %s\n", ub1.uauthor);
    printf("Enter the price of book : ");
    scanf("%f", &ub1.uprice);
    printf("Price of book is: %.2f", ub1.uprice);

    printf("\n");
    return 0;
}
