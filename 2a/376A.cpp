#include<bits/stdc++.h>
using namespace std;
int main(){
    
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 

    string s;
    cin>>s;
    char p='a';
    int ans=0;
    for(int i=0;i<s.size();i++){
        int x=abs(s[i]-p);
        ans+=min(x,26-x);
        p=s[i];
    }
    cout<<ans;
    
}