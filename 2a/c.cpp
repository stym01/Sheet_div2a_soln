#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(mpp[x]==0)
                a.push_back(x);
            mpp[x]++;
        }

        // sort(a.begin(),a.end());
        int maxi=-1e9;

        for(int i=0;i<a.size();i++){
            int x=a[i];
            int cnt=0;
            int j=k;
            int l=i;
            while(j--){
                if(mpp[x]==0) break;
                // if(mpp.find(x)!=mpp.end()){
                    cnt+=mpp[x];
                    x++;
                // }
            }
            maxi=max(maxi,cnt);
        }
        cout<<maxi<<endl;
    }
    
}