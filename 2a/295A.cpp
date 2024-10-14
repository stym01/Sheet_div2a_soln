#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    string s;
    vector<int>arr(26,0);
    int flag=0;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"NO";
    }
    else cout<<"YES";
    
}