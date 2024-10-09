#include <iostream>
#include<math.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    
    while(1){
        long long n;
        cin>>n;
        bool cnt=false;
        if(n==0) break;
        long long f=sqrt(n);
        if(f*f==n) cnt=true;
        if(cnt==true){
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;
    }

}