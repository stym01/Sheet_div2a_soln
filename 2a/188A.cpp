#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    long long n,k;
    cin>>n>>k;
    long long odd,even;
    if(n%2==0){
        odd=n/2;
    }
    else odd=n/2+1;
    even=n-odd;
    long long ans;

    if(k>odd){
        ans=(k-odd)*2;
    }
    else{
        ans=1+(k-1)*2;
    }
    cout<<ans;
}