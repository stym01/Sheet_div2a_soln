#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    long long n;
    cin>>n;
    long long no=(n+1)/2;
    long long ne=n/2;
    long long so=no*no;
    long long se=ne*(ne+1);
    long long sum=se-so;
    cout<<sum;
    
}