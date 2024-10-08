#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ant=0;
    int dan=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') ant++;
        else if(s[i]=='D') dan++;
    }
    if(ant>dan) cout<<"Anton";
    else if(dan>ant) cout<<"Danik";
    else cout<<"Friendship";

}