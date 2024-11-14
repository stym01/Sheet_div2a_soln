#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=-1e9;
        int mini=1e9;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            maxi=max(maxi,x);
            mini=min(mini,x);
        }
        cout<<(n-1)*(maxi-mini)<<endl;
    }
    
}