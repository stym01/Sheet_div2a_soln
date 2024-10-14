#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    char c;
    cin>>c;
    string s;
    cin>>s;
    vector<string>arr={"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
    map<char,pair<int,int>>mpp;
    for(int i=0;i<3;i++){
        for(int j=0;j<arr[i].size();j++){
            char x=arr[i][j];
            mpp[x]={i,j};
        }
    }
    string res;
    if(c=='R'){
        for(int i=0;i<s.size();i++){
            char x=s[i];
            int row=mpp[x].first;
            int col=mpp[x].second;
            cout<<arr[row][col-1];
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            char x=s[i];
            int row=mpp[x].first;
            int col=mpp[x].second;
            cout<<arr[row][col+1];
        }
    }
    
}