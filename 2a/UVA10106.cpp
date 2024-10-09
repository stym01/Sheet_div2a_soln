#include<bits/stdc++.h>
using namespace std;

string f(string &x,string &y){
    int n1=x.size();
    int n2=y.size();
    vector<char>ans(n1+n2,'0');

    for(int i=n1-1;i>=0;i--){
        int carry=0;
        for(int j=n2-1;j>=0;j--){
            int temp=((x[i]-'0')*(y[j]-'0'))+(ans[i+j+1]-'0')+carry;
            carry=temp/10;
            ans[i+j+1]=temp%10+'0';
        }
        ans[i]=carry+'0';
    }

    string res;
    int i=0;
    for(i=0;ans[i]=='0';i++);
    if(i>=n1+n2){
        res+='0';
    }

    else
        for(i=i;i<ans.size();i++){
            res+=ans[i];
        }
    return res;

}

int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    
    string x;
    string y;

    while(cin>>x>>y){
        string ans=f(x,y);
        cout<<ans<<endl;
    }
    
}