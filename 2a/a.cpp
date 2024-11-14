#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
        int n1=s.size();
        int n2=t.size();
        int mini=min(n1,n2);
        int i=0;
        for(i=0;i<mini;i++){
            if(s[i]!=t[i]){
                break;
            }
        }
        if(i!=0)
            cout<<n1+n2+1-i<<endl;
        else cout<<n1+n2<<endl;
    }
    
}