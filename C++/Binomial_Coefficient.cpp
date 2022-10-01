#include <bits/stdc++.h>
using namespace std;

const long long maxN=100001;
const long long MOD=1000000007;

long long factorial[maxN+1];


long long power(long long a,long long b){
    a%=MOD;
    long long res=1;
    while(b){

        if(b&1){
            res=res*a;
            res%=MOD;
        }
        a=a*a;
        a%=MOD;
        b>>=1;
    }
    return res;

}


long long binomial_coeffient(long long n,long long b){

    long long afact=factorial[n];
    long long bfact=factorial[b];
    long long a_bfact=factorial[n-b];
    long long inverse=power((bfact*a_bfact)%MOD,MOD-2);
    long long value=(afact*inverse)%MOD;
    return value;

}
int main(){

    //pre computing faction of numbers
    factorial[0] = 1;
    for (long long i = 1; i <= maxN; i++) {
        factorial[i] = factorial[i - 1] * i % MOD;
    }

    long long n=0,r=0; //defautl value of n,r=0;
    cin>>n>>r;

    if(r>n){
        cout<<"ERROR:value r must not be greater than n!\n";
    }
    else{

        //function to find binomial coefficent nCr
        cout<<binomial_coeffient(n,r);
    }

    return 0;
}
