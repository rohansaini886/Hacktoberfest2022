//FIND AN FACTORIAL OF GIVEN NUMBER
#include <stdio.h>
int facto(int n)
{
int ans;
if (n == 1 || n == 0)
ans = 1;
else
ans = n * facto(n - 1);
return ans;
}
int main()
{
int n;
printf("Enter the number : \n");
scanf("%d", &n);
printf("the factorial of number %d  is : %d",n, facto(n));
return 0;
}