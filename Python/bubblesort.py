arr = []


def makeArray(n, array):
    for i in range(n):
        x = int(input("Enter element number " + str(i+1) + ": "))
        arr.append(x)


def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]


n = int(input("Enter number of elements in your array: "))
makeArray(n, arr)
bubbleSort(arr)
print("Sorted array is: " + " ".join([str(i) for i in arr]))
