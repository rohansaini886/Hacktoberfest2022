#include<stdio.h>
#include<conio.h>
#define MAX 1000

void printarr(int[], int);

int main(){
    int a[MAX],i,j,N,temp;
    //clrscr();
    printf("Enter no. of elements : ");
    scanf("%d",&N);
    printf("Enter the elements : ");
    for(i = 1; i <= N; i++) scanf("%d",&a[i]);//1 indexed array
    for (i = 1; i < N; i++){//N-1 comparisons
        for (j = 1; j <= N - i; j++){
            if(a[j] > a[j+1]){//swap the elements
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        } 
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
