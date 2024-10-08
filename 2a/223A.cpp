#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    vector<int>a(n);
    int s=0;
    int d=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   
    int l=0;
    int r=n-1;
    int flag=0;
    while(l<=r){
        if(flag==0){
            if(a[l]>a[r]){
                s+=a[l];
                l++;
            }
            else{
                s+=a[r];
                r--;
            }
            flag=1;
        }
        else{
            if(a[l]>a[r]){
                d+=a[l];
                l++;
            }
            else{
                d+=a[r];
                r--;
            }
            flag=0;
        }
    }
    cout<<s<<" "<<d;
}