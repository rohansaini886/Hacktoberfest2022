package Sorting_algorithms;

import java.util.*;

//So we will be comparing each element with its next adjacent element and swap the larger element to the right. 
//This will ensure that after one pass largest element will be present in the rightmost index.

public class Bubble_Sort {

  public static void bubbleSort(int[] arr) {
    for(int i=0;i<arr.length;i++){
      for(int j=0;j<arr.length-i-1;j++){
        if(isSmaller(arr,j+1,j)==true){
          swap(arr,j+1,j);
        }
      }
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
  
  //used for printing the array
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
    bubbleSort(arr);
    print(arr);
  }

}