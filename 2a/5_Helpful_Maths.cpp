#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int j=0;
    char v[100];
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            v[j]=s[i];
            j++;
        }
    }

    sort(v,v+j);
    cout<<v[0];
    for( auto i=1; i<j; i++)
    {
        cout<<"+"<<v[i];
    }

}