#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int i;
    int flag =0;
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    for(i=0; i<s1.size(); i++)
    {
        if(s1[i]>s2[i])
        {   flag=1;
            break;
        }
        if(s1[i]<s2[i])
        {
            flag =-1;
            break;
        }
    }
    cout<<flag;
}