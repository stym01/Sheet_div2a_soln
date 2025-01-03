#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    int sub=0;
    int i=0;
    while(sub<=(sum-sub)){
        sub=sub+a[i];
        i++;
    }
    cout<<i;
    return 0;
}