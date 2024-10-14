#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    vector<int>a(n+1,0);
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    int flag=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"Oh, my keyboard!";
    }
    else cout<<"I become the guy.";
    
}