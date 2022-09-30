// Solution of problem https://codeforces.com/contest/224/problem/A

#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int x, y, z, a, b, c;
    cin >> x >> y >> z;
    a = sqrt(x * z / y);
    b = y * a / z;
    c = z / a;
    cout << (a + b + c) * 4;
    return 0;
}
