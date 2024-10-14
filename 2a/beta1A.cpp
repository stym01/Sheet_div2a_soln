#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    double n,m,a;
    cin>>n>>m>>a;
    long long len=ceil(n/a);
    long long wid=ceil(m/a);
    cout<<len*wid;
    
}