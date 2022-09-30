#include <iostream>

using namespace std;

int Binary_search(int arr[], int n, int key){
    int s = 0;      // starting position
    int e = n - 1;  // mid position
                   

    while (s <= e){
        int mid = (s + e) / 2;
        if (arr[mid] == key){
            return mid;
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    // if key is not present
    return -1;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    
    cout << "Enter a number you wanted to find: ";
    cin >> key;
    
    int index = Binary_search(arr, n, key);

    if (index != -1){
        cout << "Entered number is in the index: " << index << endl;
    }
    else{
        cout << "Number is not found" << endl;
    }
    return 0;
}