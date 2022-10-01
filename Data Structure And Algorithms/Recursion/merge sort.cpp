#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> left, vector<int> right)
{
    int i = 0, j = 0, k = 0;
    vector<int> combine(left.size() + right.size());
    while (i < left.size() and j < right.size())
    {
        if (left[i] < right[j])
        {
            combine[k++] = left[i++];
        }
        else
        {
            combine[k++] = right[j++];
        }
    }
    while (i < left.size())
    {
        combine[k++] = left[i++];
    }
    while (j < right.size())
    {
        combine[k++] = right[j++];
    }
    return combine;
}
vector<int> mergeSort(vector<int> v)
{
    if (v.size() == 1)
        return v;
    int mid = v.size() / 2;
    vector<int> left = mergeSort({v.begin(), v.begin() + mid}); // passing copy of vector
    vector<int> right = mergeSort({v.begin() + mid, v.end()});
    return merge(left, right);
}
int main()
{
    vector<int> v = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    v = mergeSort(v);
    for (auto i : v)
        cout << i << " ";
    return 0;
}