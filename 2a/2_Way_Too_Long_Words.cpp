#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,i;
cin>>n;
    string s[n];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(i=0; i<n; i++)
    {

        if (s[i].size()>10)
            cout<<s[i][0]<<s[i].size()-2<<s[i][s[i].size()-1]<<endl;
        else
            cout<<s[i]<<endl;
    }
}