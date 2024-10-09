#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n,b,d;
    int cnt=0;
    int juice=0;
    cin>>n>>b>>d;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>b) continue;
        juice+=x;
        if(juice>d){
            cnt++;
            juice=0;
        }
    }
    cout<<cnt;
    
}