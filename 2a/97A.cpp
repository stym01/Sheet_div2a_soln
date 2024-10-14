#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mpp[x]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<mpp[i+1]<<" ";
    }
    
}