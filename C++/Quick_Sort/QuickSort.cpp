#include <iostream>
#include <vector>
using namespace std;


int partition(vector<int> &a, int s, int e){
    int pivot = a[e];
    int i = s - 1;

    for (int j = s; j < e; j++){
        if (a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[e]);

    return i + 1;
}

void quickSort(vector<int> &a, int s, int e){

    // base case
    if (s >= e){
        return;
    }
    // rec case
    int pre = partition(a, s, e);
    quickSort(a, s, pre - 1);
    quickSort(a, pre + 1, e);
}

int main(){
    vector<int> a{12, 1, 34, 2, 53, 5};
    int s = 0;
    int e = a.size() - 1;
    
    // Calling quickSort for sorting    
    quickSort(a, s, e);

    // printing sorted array
    for (int x : a){
        cout << x << ", ";
    }
    
    return 0;
}