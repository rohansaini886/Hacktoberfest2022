#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e){

    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;

    vector<int> temp;

    while (i <= m && j <= e){
        if (arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // adding remaining element in an temp
    while (i <= m){
        temp.push_back(arr[i++]);
    }
    while (j <= e){
        temp.push_back(arr[j++]);
    }

    // put element in arr form temp
    int k = 0;
    for (int i = s; i <= e; i++){
        arr[i] = temp[k++];
    }
    return;
}

void mergsort(vector<int> &arr, int s, int e){
    // base case
    if (s >= e){
        return;
    }

    // rec case
    int mid = (s + e) / 2;
    mergsort(arr, s, mid);
    mergsort(arr, mid + 1, e);
    return merge(arr, s, e);
}

int main(){
    vector<int> arr{1, 23, 5, 22, 87, 2, 3, 4, 4};

    int s = 0;
    int e = arr.size() - 1;
    
    // Calling mergsort for sorting
    mergsort(arr, s, e);
    
    // printing sorted array
    for (int x : arr){
        cout << x << ", ";
    }
    
    return 0;
}
