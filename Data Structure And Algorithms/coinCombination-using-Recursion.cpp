#include<iostream>
using namespace std;

int coinCombination(int coins[], int n, int amount, int currentPos)
{
    // Base Case
    if (amount==0)
        return 1;
    if (amount<0)
        return 0;
    
    int ways=0;

    // Use every coin
    for (int i = currentPos; i < n; i++)
    {
        ways+=coinCombination(coins,n,amount-coins[i],i);
    }
    
    return ways;
}

int main()
{
    int coins[]= {1,2};
    int amount = 6;

    cout<<"The total number of combinations of coins that are needed to make up the amount are: "<<coinCombination(coins,2,amount,0)<<endl;

    return 0;
}