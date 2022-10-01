// Below is an implementation of Kadane's Algo
// This Algo finds out Largest Sum of a Contiguous Subarray
// Time Complexity is O(n) and Space Compleity is O(1)

#include <bits/stdc++.h>
using namespace std;

int Kadane(int a[], int size)
{
    int max2 = INT_MIN;
    int max1 = 0;

    for (int i = 0; i < size; i++)
    {
        max1 += a[i];
        if (max2 < max1)
            max2 = max1;

        if (max1 < 0)
            max1 = 0;
    }
    return max2;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size] = {0};
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int ans = Kadane(a, size);
    cout << "Maximum contiguous sum is " << ans;
    return 0;
}
