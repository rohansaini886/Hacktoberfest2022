def binarySearch(array,number,low,high):

    while low<=high:

        middle = low + (high- low)//2

        if array[middle] == number:
            return middle

        elif array[middle] < number:
            low = middle + 1

        else:
            high = middle - 1

    return -1

array = [10,20,30,40,50,60]

number=50

output = binarySearch(array, number , 0 , len(array)-1)

if output!= -1:

    print("Element is present at" + str(output))
else:

    print("Element could not be found in the given array")
