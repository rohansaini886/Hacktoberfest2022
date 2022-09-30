#include <iostream>
using namespace std;

class heap
{
public:
    int arr[250];
    int size;

    heap()
    {
        size = 0;
    }

    void insertIntoHeap(int val)
    {
        // We want to insert a value into the heap
        size++;
        int index = size;

        // Step 1:insert value
        arr[index] = val;

        // Step 2:take val to its right position
        while (index > 1)
        {
            int parentIndex = index / 2;

            if (arr[parentIndex] < arr[index])
            {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else
                break;
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size==0)
        {
            cout<<"Heap is already empty!"<<endl;
            return;
        }
        
        // Step 1:Put first element(to be deleted) at the end of the heap by swapping the first and last element
        swap(arr[1], arr[size]);
        // Step 2:Delete the element
        size--;
        // Root element ko sahi position par pohochao
        int parentIndex=1;
        int largest=parentIndex;
        while (parentIndex<=size)
        {
            int leftchildIndex=2*parentIndex;
            int rightchildIndex=2*parentIndex+1;
            if (leftchildIndex<=size && arr[largest]<arr[leftchildIndex])
            {
                largest=leftchildIndex;
            }
            if (rightchildIndex<=size && arr[largest]<arr[rightchildIndex])
            {
                largest=rightchildIndex;
            }
            if (largest!=parentIndex)
            {
                swap(arr[parentIndex],arr[largest]);
                parentIndex=largest;
            }
            // Agar largest change nahi hua,iska matlab root element apni correct position par h ya aagya h
            else
                return;
        }
    }
};

void heapify(int arr[],int n,int i) // for maxheap
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<=n && arr[largest]<arr[left])
        largest=left;
    if(right<=n && arr[largest]<arr[right])
        largest=right;
    if(largest!=i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr,n,largest);
    }
    else
        return;
}

int main()
{
    int arr[]={-1,2,6,8,3,7};
    int n=5;

    for (int i = n/2; i >= 1; i--)
        heapify(arr,n,i);
    
    for (int i = 1; i <= n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    

    // heap maxheap;

    // maxheap.insertIntoHeap(2);
    // maxheap.insertIntoHeap(6);
    // maxheap.insertIntoHeap(8);
    // maxheap.insertIntoHeap(3);
    // maxheap.insertIntoHeap(7);

    // maxheap.print();

    // maxheap.deleteFromHeap();
    // maxheap.print();
    // maxheap.deleteFromHeap();
    // maxheap.print();
    // maxheap.deleteFromHeap();
    // maxheap.print();
    // maxheap.deleteFromHeap();
    // maxheap.print();
    // maxheap.deleteFromHeap();
    // maxheap.print();
    // maxheap.deleteFromHeap();
    // maxheap.print();


    return 0;
}