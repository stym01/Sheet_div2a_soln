#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    vector<int>a(26,0);
    string s;
    cin>>s;
    for(auto it:s){
        a[it-'a']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(a[i]!=0) cnt++;
    }
    if(cnt%2==0){
        cout<<"CHAT WITH HER!";
    }
    else cout<<"IGNORE HIM!";
    
}