#include <bits/stdc++.h>

using namespace std;

// Sort the elements in increasing order
void bubble_sort(int arr[], int n){
    for (int time = 1; time <= n - 1; time++){
        // repeated swapping
        for (int j = 0; j <= n - time - 1; j++)
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
    }
}


int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    // calling bubble_sort for sorting
    bubble_sort(arr, n);

    // pring array after sorting
    for (auto x : arr){
        cout << x << ", ";
    }

    return 0;
}
