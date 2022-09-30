public class LinearSearch {

  public static void main(String[] args) {
  int[] num = {2,3,4,1,6,7};
  int ans = linearSearch(num,5);
  System.out.println(ans);
  }
  
  static int linearSearch(int[] arr,int target){
   if(arr.length==0){
     return -1;
   }
   
   for(int index=0; index<arr.length; index++){
     int elament = arr[index];
     if(elament==target){
       return index;
     }
   }
   return -1;
  }
}
