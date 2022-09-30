public class CyclicSort {
    public static void main(String[] args) {

        int[] arr = {2,1,2,2,2,2};

        cyclicSort(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void cyclicSort(int[] arr){
        int i = 0;
        while (i < arr.length){
            int correct = arr[i]-1;
            if (arr[i]!=arr[correct]){
                swap(arr,i,arr[i]-1);
            }
            else{
                i++;
            }
        }
    }

    static void swap(int[] arr, int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;

    }
}
