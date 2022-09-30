#include <bits/stdc++.h>

using namespace std;

// Sort the elements in increasing order
void insertion_sort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int current = arr[i];
        int prev = i - 1;
        
        while (arr[prev] > current && prev >= 0){
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = current;
    }
}

int main(){

    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    
    // Calling insertion_sort for sorting
    insertion_sort(arr, n);

    for (auto x : arr){
        cout << x << ", ";
    }
    
    return 0;
}
