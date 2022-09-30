#include<stdio.h>
int main()
{
    int i,j,n,temp,flag;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    int array[n];

    printf("Enter the number in the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

    for(i=0;i<n-1;i++)
    {
        flag = 0;
        for(j=0;j<n-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1]=temp;
                flag = 1;
            }
        }
        if (flag==0)
            break;
    }
    printf("The Sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
