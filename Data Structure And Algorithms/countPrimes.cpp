// Sieve of Eratosthenes is a concept
// used for providing optimized solution
// for problems like Count Primes

// SOE Algo:
// 1)mark every number as prime initially
// 2)mark 0 and 1 as non-prime
// 3)mark table wise number as non-prime

#include<iostream>
#include<vector>
using namespace std;

int soe(int n)
{
    int cnt = 0;
    // Saare number ko initially prime maan lo
    vector<bool>prime(n+1,true);

    // o or 1 ko non-prime mark krdo
    prime[0]= prime[1]= false;

    //table wise number non-prime mark krdo
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cnt++;
        }
        for (int j = 2*i; j <= n; j=j+i)
        {
            prime[j]= false;
        }
    }

    return cnt;
}

int main()
{
    int n=30;

    cout<<"Count of prime is "<<soe(n)<<endl;

    return 0;
}