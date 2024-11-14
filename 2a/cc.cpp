#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=1;
        int done=0;
        if(s[0]=='1' || s[n-1]=='1'){
            cout<<"YES"<<endl;
            done=1;
        }
        else{
            for(int i=1;i<n-1;i++){
                if(s[i]=='1' && (s[i-1]!='0' || s[i+1]!='0')){
                    cout<<"YES"<<endl;
                    done=1;
                    break;
                }
                else flag=flag^1;
            }
        }
        if(done==0) cout<<"NO"<<endl;
    }
    
}