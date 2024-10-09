#include<bits/stdc++.h>
using namespace std;
int main(){
    
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    
    int s,m;
    cin>>s>>m;
    int seed0=0;
    vector<int>a(m,0);
    int cnt=m;
    while(cnt--){
        int seed1=(seed0+s)%m;
        a[seed1]=1;
        seed0=seed1;
    }
    int flag=0;
    for(int i=0;i<m;i++){
        if(a[i]==0){
            flag=1;
            break;
        }
    }

    int step=s;
    int mod=m;
    cnt=0;
    while(step>0){
        cnt++;
        step=step/10;
    }
    for(int i=0;i<10-cnt;i++){
        cout<<" ";
    }
    cout<<s;
    cnt=0;
    while(mod>0){
        cnt++;
        mod=mod/10;
    }
    for(int i=0;i<10-cnt;i++){
        cout<<" ";
    }
    cout<<m;
    for(int i=0;i<5;i++){
        cout<<" ";
    }

    if(flag==1){
        cout<<"Bad Choice";
    }
    else{
        cout<<"Good Choice";
    }
}