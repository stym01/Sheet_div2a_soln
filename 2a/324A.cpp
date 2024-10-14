#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n,k;
    cin>>n>>k;
    if(n==1 && k==10){
        cout<<-1;
    }
    else{
        if(k!=10){
            for(int i=0;i<n;i++){
                cout<<k;
            }
        }
        else{
            cout<<1;
            for(int i=0;i<n-1;i++){
                cout<<0;
            }
        }
    }
}