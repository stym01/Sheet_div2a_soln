#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    
    int n,h;
    cin>>n>>h;
    int ans=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<=h) ans+=1;
        else ans+=2;
    }
    cout<<ans;
}