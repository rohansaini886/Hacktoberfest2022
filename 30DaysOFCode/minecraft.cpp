#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,m,x,y,i,j,height;
    int fall = 0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++){
        cin>>height;
        a[i]=height;
    }
    for(i=0;i<m;i++){
        cin>>x>>y;
        
        if (x<y){
            for(j=x-1;j<y;j++){
                //cout<<j;
               if(j==(y-1)){
                 break;
               }
                if(a[j]>a[j+1]){
                fall = fall+(a[j]-a[j+1]);
                
                }
                else
                fall = fall;
                
            }
            
            
        }
        else if(x>y){
            
            for(j=x-1;j>y-1;j--){
                //if(j<0){
                //    break;
                //}
                if(a[j]>a[j-1]){
            fall = fall+(a[j]-a[j-1]);
                }
                else
                fall = fall;
            }
      
        }
        
        cout<<fall<<endl;
        
        fall =0;
    
    }
    
   

}