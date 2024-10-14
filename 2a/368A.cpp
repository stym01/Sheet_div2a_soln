#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    //k

    int n,m;
    cin>>n>>m;
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            if(x=='C' || x=='Y' || x=='M'){
                flag=1;
            }
        }
    }
    if(flag==1) cout<<"#Color";
    else cout<<"#Black&White";
    
}