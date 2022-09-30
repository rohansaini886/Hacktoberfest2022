//TO FIND AN AREA OF TRIANGLE BY IT'S BASE AND HEIGHT
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, h; //a=area h=height b=base
    printf("Enter the height of triangle \n");
    scanf("%f", &h);
    printf("Enter the base of triangle\n");
    scanf("%f", &b);
    a = 0.5 * b * h;
    printf("\nArea of triangle is %.2f", a);
    return 0;
}