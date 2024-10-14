#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n,m;
    cin>>n>>m;
    int ans=-1;
    for(int i=n+1;i<=50;i++){
        if(prime(i)) {
            ans=i;
            break;
        }
    }
    if(ans==m) cout<<"YES";
    else cout<<"NO";
    
}