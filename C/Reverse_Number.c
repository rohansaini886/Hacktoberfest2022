#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int remainder = 0, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num <= 0)
    {
        printf("Please enter a positive integer!\n");

        printf("\nEnter an integer: ");
        scanf("%d", &num);
    }

    while (num)
    {
        remainder = num % 10;

        reverse = (reverse * 10) + remainder;

        num = num / 10;
    }

    printf("Reversed number = %d\n", reverse);
  
    return 0;
}
