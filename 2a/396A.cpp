#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size();
    int n2=s2.size();
    int ans=0;
    if(n1==n2){
        if(s1==s2) ans=-1;
        else ans=n1;
    }
    else ans=max(n1,n2);
    
    cout<<ans;
}