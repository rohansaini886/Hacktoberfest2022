#include <iostream>
using namespace std;

// counting number of setbits

void countSetBit(int n) {      // theta log(n)
    int count = 0;
    while(n) {
        if( (n & 1) == 1) {
            count++;
        }
        n>>=1; 
    }
    cout<<count<<endl;
}

void BrianKernighan(int n) {   // O log(n)
    int count = 0;
    while(n) {
        n &= (n-1);
        count++;
    }
    cout<<count<<endl;
}


int main() {

    int n = 19;
    countSetBit(n);
    BrianKernighan(n);

    return 0;

}