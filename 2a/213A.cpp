#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n,k;
    cin>>n>>k;
    int cnt=0;
    while(n--){
        int x;
        cin>>x;
        vector<int>a(k+1,0);
        int flag=0;
        while(x>0){
            int ld=x%10;
            x=x/10;
            if(ld>k) {
                continue;
            }
            a[ld]++;

        }
        for(int i=0;i<k+1;i++){
            if(a[i]==0){
                flag=1;
            }
        }
        if(flag==0) cnt++;
    }358
    cout<<cnt;
    
}