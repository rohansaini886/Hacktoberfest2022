// #include <bits/stdc++.h>
// using namespace std;

// void printOdd(int arr[], int n) {
//     //int n = (sizeof(arr)/sizeof(arr[0]));
//     cout<<n<<endl;
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void printEven(int n) {
//     cout<<n/2<<endl;
//     for(int i=0;i<(n/2)-1;i+=2) {
//         cout<<i+1<<" ";
//     }
//     for(int i=n-1;i>=(n/2)+1;i-=2) {
//         cout<<i+1<<" ";
//     }
//     cout<<endl;
//     cout<<n/2<<endl;
//     for(int i=1;i<(n/2);i+=2) {
//         cout<<i+1<<" ";
//     }
//     for(int i=n-2;i>=(n/2);i-=2) {
//         cout<<i+1<<" ";
//     }
//     cout<<endl;
// }

// int main() {
//     int n, check = 0;;
//     cin>>n;
//     int one[n], two[n];
//     one[0] = 1;
//     one[1] = 2;
//     two[0] = 3;
//     for(int i=1;i<=n;i++) {
//         check += i;
//         if(n > 3 && i > 3) {
//             one[(i/2)-1] = i-3;
//             one[i/2] = i;
//             two[(i/2)-2] = i-2;
//             two[(i/2)-1] = i-1;    
//         }
//     }
//     if(check%2 == 1) {
//         cout<<"NO"<<endl;
//     } else {
//         if(n%2 == 0) {
//             cout<<"YES"<<endl;
//             printEven(n);
//         } else {
//             cout<<"YES"<<endl;
//             printOdd(one, (n/2) + 1);
//             printOdd(two, n/2);
//         }
//     }    
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int N;

int main(){
    scanf("%d", &N);
    if(N%4 == 1 || N%4 == 2)    printf("NO\n");
    else if(N%4 == 3){
        printf("YES\n");
        printf("%d\n", N/2);
        for(int i = 2; i <= N/2; i += 2)
            printf("%d %d ", i, N-i);
        printf("%d\n%d\n", N, N/2+1);
        for(int i = 1; i <= N/2; i += 2)
            printf("%d %d ", i, N-i);
    } else {
        printf("YES\n");
        printf("%d\n", N/2);
        for(int i = 2; i <= N/2; i += 2)
            printf("%d %d ", i, N-i+1);
        printf("\n%d\n", N/2);
        for(int i = 1; i <= N/2; i += 2)
            printf("%d %d ", i, N-i+1);
    }
}