#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    char x;
    char y;
    cin>>x;
    cin>>y;
    int flag=0;
    if(x==y) flag=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0) && (j==0 || j==1)){
                continue;
            }
            if(i==j || (n-i-1==j)){
                char z;
                cin>>z;
                if(z!=x) flag=1;
            }
            else{
                char z;
                cin>>z;
                if(z!=y) flag=1;
            }
        }
    }
    if(flag==1) cout<<"NO";
    else cout<<"YES";
    
}