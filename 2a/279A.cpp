#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n;
    cin>>n;
    map<int,vector<int>>mpp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mpp[x].push_back(i+1);
    }
    int one=mpp[1].size();
    int two=mpp[2].size();
    int three=mpp[3].size();
    
    int w=min(one,min(two,three));
    cout<<w<<endl;
    if(w!=0){
        for(int i=0;i<w;i++){
            cout<<mpp[1][i]<<" "<<mpp[2][i]<<" "<<mpp[3][i]<<endl;
        }
    }
    
}