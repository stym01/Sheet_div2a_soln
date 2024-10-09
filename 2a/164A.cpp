#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    int cnt=0;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i]={x,y};
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(a[i].first==a[j].second){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    
}