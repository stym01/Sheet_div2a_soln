#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    int last=-1;
    int cnt=1;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int a=s[0]-'0';
        int b=s[1]-'0';
        if(a==last) {
            cnt++;
        }
        last=b;
    }
    cout<<cnt;
    
}