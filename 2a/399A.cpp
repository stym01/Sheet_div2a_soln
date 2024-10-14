#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    int cnt2=0;
    if(n<=2) {
        cout<<0;
    }
    else{
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]==a[0]){
                cnt++;
            }
            if(a[i]==a[n-1]){
                cnt2++;
            }
        }
        cout<<max(n-(cnt)-(cnt2),0);
    }
}