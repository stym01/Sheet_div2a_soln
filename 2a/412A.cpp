#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    int rated=0;
    int flag=0;
    int mini=1e9;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(mini<x) flag=1;
        mini=min(mini,x);
        if(x!=y) rated=1;
    }
    if(rated) cout<<"rated";
    else if(flag==1) cout<<"unrated";
    else cout<<"maybe";
    
}