# Question ❔
Enter the data given by the user in a max-heap form.

## Approach 💡

1. We declare an array of the size according to the number of inputs we want from the user.
2. Let the user enter the data
3. When the user enters a data, following steps takes place
   * The data is input in the array at arr[index] position.
   * The data is compared to its parent element.
     * If the children element is greater than parent element, both the elements are swapped. *(this is done until the children element reaches its right position in the max-heap)*
     * IF the children is less than the parent element, we move on.
  * Then after deciding the position of the entered data in max-heap, we iterate the index by 1.
4. Steps 2 and 3 are repeated until the array reaches its limit of taking input.
5. Resultant array is printed in the order of max-heap.

## Code 💻

The solution code for the problem is given [here](https://github.com/kartikjain2001/Hacktoberfest2022/blob/master/Data%20Structure%20And%20Algorithms/Insertion%20in%20MaxHeap/Insertion%20of%20data%20in%20Max%20-%20Heap.c)
    
