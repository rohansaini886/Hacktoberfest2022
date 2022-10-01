import java.util.Arrays;

public class BubbleSort{

  public static void main(String[] args) {

  int[] arr = {5, 1, 4, 2, 8};
  bubblesort(arr,arr.length - 1,0);
  System.out.println(Arrays.toString(arr));
}
static void bubblesort(int arr[], int end, int start){
//we check if last index is greater than first index
  if(end < start){
    return;
  }
  //This loop will execute if first index is less than last index. this loop will swap biggest element of array with last then for second biggest it will swap with second last element and so on ...
  if(start <= end){
  //this condition is comparing element and swaping them
    if(arr[start] > arr[start+1]){ 
      int tmp = arr[start];  
      arr[start] = arr[start+1];  
      arr[start+1] = tmp; 
}
    //if element is at right place then just check for next element 
   else{

   bubblesort(arr,end,start+1);  

   }

  }
  // this will sort unsorted array and ignore sorted array
  bubblesort(arr,end-1,0); 
}
}
