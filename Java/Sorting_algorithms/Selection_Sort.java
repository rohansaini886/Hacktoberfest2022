package Sorting_algorithms;

import java.util.*;

//Let's say that elements of our input array are: (5, 9, 8, 2 and 1).
//As the length of the array is 5 that means there will be a total of four iterations. 
//What we basically do is, find the minimum value in the array and swap it with the first element. 
//And at the end of each iteration, the smallest value will get placed at the correct position of the array.

public class Selection_Sort {
    public static void selectionSort(int[] arr) {
        int n=arr.length;
        int minIndex=0;
        for(int i=0;i<n-1;i++){
          minIndex=i;
          for(int j=i+1;j<n;j++){
            if(isSmaller(arr,j,minIndex)==true){
              minIndex=j;
            }
          }
          swap(arr,i,minIndex);
        }
        
      }
    
      // used for swapping ith and jth elements of array
      public static void swap(int[] arr, int i, int j) {
        System.out.println("Swapping " + arr[i] + " and " + arr[j]);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    
      // return true if ith element is smaller than jth element
      public static boolean isSmaller(int[] arr, int i, int j) {
        System.out.println("Comparing " + arr[i] + " and " + arr[j]);
        if (arr[i] < arr[j]) {
          return true;
        } else {
          return false;
        }
      }
    
      public static void print(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
          System.out.println(arr[i]);
        }
      }
    
      public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
          arr[i] = scn.nextInt();
        }
        selectionSort(arr);
        print(arr);
      }
}
