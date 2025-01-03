#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int a[14]={4,7,47,74,77,44,777,444,774,747,477,744,474,447};
  int s=14;
  int n;
  cin>>n;
  int flag=0;
  for(int i=0;i<s;i++){
      if(n%a[i]==0){
          flag=1;
          break;
      }
  }
  if(flag==1)
   cout<<"YES";
  else
   cout<<"NO";
    return 0;
}