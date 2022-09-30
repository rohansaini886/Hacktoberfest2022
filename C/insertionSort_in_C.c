#include <stdio.h>
#include <stdlib.h>

void selectionSort(int a[100], int n){
  int min,temp;
  for (int i=0;i<n-1;i++){
    min = i;
    for(int j=i+1;j<n;j++){
    if(a[j]<a[min]){
      min=j;
    }
  }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
}

int main(){

  int x;
  printf("\nEnter size of array: ");
  scanf("%d",&x);
  int arr[x];
  printf("\nEnter elements of array: ");
  for(int i=0;i<x;i++){
    scanf("%d",&arr[i]);
  }
  selectionSort(arr,x);
  printf("\nSorted array: ");
  
  
  for(int i=0;i<x;i++){
    printf("%d ",arr[i]);
  }


  return 0;
}
