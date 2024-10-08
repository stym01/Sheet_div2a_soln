#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(1){
        if(a>b){
            cout<<cnt;
            break;
        }
        a=a*3;
        b=b*2;
        cnt++;
    }
    
}