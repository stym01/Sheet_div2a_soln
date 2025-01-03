#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //for max to the left
        int max=a[0];
        int temp=0;
        for(int i=1;i<n;i++){
            if(a[i]>max){
            max=a[i];
            temp=i;}
    }
    for(int i=temp;i>0;i--){
        swap(a[i],a[i-1]);
        count++;
    }

    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<=min)
        {
            min=a[i];
            temp=i;
        }
    }

    for(int i=temp;i<n-1;i++){
        swap(a[i],a[i+1]);
        count++;
    }

    cout<<count;

    return 0;
}