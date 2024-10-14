#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mpp[a[i]]=i;
    }
    vector<int>cnt(n,0);
    for(int i=n;i>=1;i--){
        int ind=mpp[i];
        for(int i=0;i<=ind;i++){
            
        }
    }
    

















    // stack<pair<int,int>>st;
    // vector<vector<int>>ans(n);
    // for(int i=n-1;i>=0;i--){
    //     if(st.empty() || st.top().first>=a[i]){
    //         st.push({a[i],i});
    //     }
    //     else{
    //         int ind;
    //         vector<int>temp;
    //         while(!st.empty()){
    //             int node=st.top().first;
    //             ind=st.top().second;
    //             st.pop();
    //             temp.push_back(node);
    //         }
    //         reverse(temp.begin(),temp.end());
    //         ans[ind]=temp;
    //         st.push({a[i],i});
    //     }
    // }
    // int ind;
    // vector<int>temp;
    // while(!st.empty()){
    //     int node=st.top().first;
    //     ind=st.top().second;
    //     st.pop();
    //     temp.push_back(node);
    // }
    // reverse(temp.begin(),temp.end());
    // ans[ind]=temp;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<ans[i].size();j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
}