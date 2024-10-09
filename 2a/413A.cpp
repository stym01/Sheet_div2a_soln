#include<bits/stdc++.h>
using namespace std;
int main(){
    
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 

    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int len=0;
    if(n%k==0) len=n/k;
    else len=n/k+1;
    int time=0;
    int exp=len*t;
    for(int i=0;i<len;i++){
        time+=t;
        if(t>d){
            i++;
        }
    }
    if(time>=exp){
        
    }
    
}