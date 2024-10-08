#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    int r=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1){
            if(r==0){
                cnt++;
            }
            else{
                r--;
            }
        }
        else r+=x;
    }
    cout<<cnt;
}