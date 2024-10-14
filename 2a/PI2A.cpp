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
    int c1=a[0];
    int c2=a[n-1];
    cout<<abs(c1-a[1])<< " "<<abs(c1-c2)<<endl;

    for(int i=1;i<n-1;i++){
        int maxi=max(abs(a[i]-c1),abs(a[i]-c2));
        int mini=min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
        cout<<mini<< " "<<maxi<<endl;
    }
    cout<<abs(c2-a[n-2])<<" "<<abs(c1-c2);
    
}