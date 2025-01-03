#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int x;
        char ans;
        string symbol;
        int flag=0;
        string res;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') {
                flag++;
                continue;
            }
            if(flag==0){
                symbol+=s[i];
            }
            if(flag==1){
                res+=s[i];
            }
            if(flag==2)
            ans=s[i];
        }
        cout<<res;
        // x=stoi(res);

        // cout<<ans<< " "<<symbol<<" "<<x<<endl;
    }
}