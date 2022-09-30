#include <iostream>

using namespace std;

int linear_search(int arr[], int key, int n){
    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return 0;
}


int main(){

    // array
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // length of an array
    int length = sizeof(arr) / sizeof(arr[0]);
    int find;
    cout << "Enter a number : ";
    cin >> find;
    
    int index = linear_search(arr, find, length);
    
    if (index != -1){
        cout << "Entered number is in the index: " << index << endl;
    }else{
        cout << "Entered number is not found." << endl;
    }

    return 0;
}
