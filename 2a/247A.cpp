#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    
    vector<int>a(4);
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++){
        ans+=a[s[i]-1-'0'];
    }
    cout<<ans;

}