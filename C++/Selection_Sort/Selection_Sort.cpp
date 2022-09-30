#include <iostream>
using namespace std;

// Sort the elements in increasing order
void selection_sort(int a[], int n){

    for (int pos = 0; pos <= n - 2; pos++){

        int current = a[pos];
        int min_position = pos;

        // find out the element
        for (int j = pos; j < n; j++){

            if (a[j] < a[min_position]){
                min_position = j;
            }
        }
        // swap outside the loop
        swap(a[min_position], a[pos]);
    }
}

int main(){
    int arr[] = {3, 4, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    // Calling selection_sort for sorting
    selection_sort(arr, n);

    // printing sorted array
    for (auto x : arr){
        cout << x << ",";
    }

    return 0;
}