#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n,k;
    cin>>n>>k;
    int cnt=0;
    while(1){
        int flag=0;
        for(int i=0;i<k;i++){
            char x=i+'a';
            cout<<x;
            cnt++;
            if(cnt==n) {
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }    
}