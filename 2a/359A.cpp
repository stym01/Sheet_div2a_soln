#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    
    int n,x;
    cin>>n>>x;
    long long cnt=x;
    int no=0;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        long long d;
        cin>>d;
        if(c=='+'){
            cnt+=d;
        }
        else{
            if(cnt>=d){
                cnt-=d;
            }
            else no++;
        }
    }
    cout<<cnt<< " "<<no;
    
}