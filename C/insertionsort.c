#include<stdio.h>
#include<conio.h>
#define MAX 1000

void printarr(int[], int);

int main(){
    int a[MAX],i,j,N,key;
    clrscr();
    printf("Enter no. of elements : ");
    scanf("%d",&N);
    printf("Enter the elements : ");
    for(i = 0; i < N; i++) scanf("%d",&a[i]);
    for (i = 1; i < N; i++){//N-1 comparisons
        key = a[i];
        j = i-1;
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && a[j] > key){
          a[j+1] = a[j];
          j--;
        } 
        a[j+1] = key;
    } 
    printf("\nSorted array :-\n");
    printarr(a,N);
    getch();
    return 0;
}

void printarr(int a[], int n){
    int i;
    for(i = 1; i <= n; i++) printf("%d ",a[i]);
}
