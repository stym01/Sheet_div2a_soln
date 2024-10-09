#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int x,y;
    cin>>x>>y;
    int maxi=max(x,y);
    maxi=6-maxi+1;
    if(maxi==6) cout<<"1/1";
    else if(maxi==5) cout<<"5/6";
    else if(maxi==4) cout<<"2/3";
    else if(maxi==3) cout<<"1/2";
    else if(maxi==2) cout<<"1/3";
    else if(maxi==1) cout<<"1/6";
    
}