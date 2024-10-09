#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    vector<int>cnt(n,0);
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        if(x-1>=0)
            a[x-1]+=y;
        if(x+1<n)
            a[x+1]+=a[x]-y-1;
        a[x]=0;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    
}