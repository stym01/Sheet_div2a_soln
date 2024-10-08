#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    string s;
    cin>>s;
    int l=0;
    int u=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>'Z') l++;
        else u++;
    }
    if(l<u){
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout<<s;
    
}