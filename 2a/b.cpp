#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int t;
    cin>>t;
    int mod=1e9+7;
    vector<long long>powers(1e5+5);
    powers[0]=1;
    for(int i=1;i<1e5+5;i++){
        powers[i]=(powers[i-1]*2)%mod;
    }

    for(int i=0;i<t;i++){
        int x;
        cin>>x;
    }
    for(int i=0;i<t;i++){
        long long x;
        cin>>x;
        cout<<powers[x]<<endl;
    }
}

