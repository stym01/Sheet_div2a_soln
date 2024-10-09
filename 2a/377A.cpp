#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int k,r;
    cin>>k>>r;
    int ld=k%10;
    int i;
    for(i=1;i<10;i++){
        int temp=(ld*i)%10;
        if(temp==r || temp==0){
            break;
        }
    }
    cout<<i;
    
}