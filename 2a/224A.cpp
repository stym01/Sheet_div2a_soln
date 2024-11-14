#include<bits/stdc++.h>
using namespace std;
int main(){
    
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 

    string s;
    cin>>s;
    int cnt1=0;
    int flag=0;
    int cnt2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='|') {
            flag=1;
            continue;
        }
        if(flag==0){
            cnt1++;
        }
        else if(flag==1) cnt2++;
    }       

    string str;
    cin>>str;
    if(str.size()<abs(cnt1-cnt2)){
        cout<<"Impossible";
    }

    
    
}