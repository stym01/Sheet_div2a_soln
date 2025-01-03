#include <bits/stdc++.h>
using namespace std;

void f(int n,int m,int &mini,int & cnt){
    if(n==1) {
        if((cnt+1)%m==0){
            mini=min(mini,cnt+1);
        }
        return;
    }
    if(n==2) {
        if((cnt+1)%m==0){
            mini=min(mini,cnt+1);
        }
        if((cnt+2)%m==0){
            mini=min(mini,cnt+2);
        }
        return;
    }
    cnt++;
    f(n-1,m,mini,cnt);
    f(n-2,m,mini,cnt);
    cnt--;
    return;
}

int main(){
    int n,m;
    cin>>n>>m;
    int cnt=0;
    int mini=1e9;
    f(n,m,mini,cnt);
    if(mini==1e9) 
        cout<<-1;
    else 
        cout<<mini;
}