#include<stdio.h>
int main()
{
    int n,temp,rev=0,ld;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0)
    {
        ld = temp%10;
        rev = rev*10+ld;
        temp = temp/10;
    }
    printf("The reversed number is %d",rev);
    if(rev == n )
        printf("\nThis number is a palindrome");
    else
        printf("\nThis number is not a palindrome");
}
