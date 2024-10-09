#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    
    unordered_map<int,int>mpp;
    int cnt=0;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        if(mpp.find(x)==mpp.end()){
            cnt++;
        }
        mpp[x]++;
    }
    cout<<4-cnt;
}