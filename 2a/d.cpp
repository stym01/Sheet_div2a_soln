#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    int n,m;
    cin>>n>>m;
    vector<vector<int>>front(m+2,vector<int>(m+2,0));
    vector<vector<int>>curr(m+2,vector<int>(m+2,0));
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    } 

    for(int ind=n-1;ind>=0;ind--){
        for(int s=m;s>=0;s--){
            for(int t=m;t>=0;t--){
                if(abs(nums[ind])>m) curr[s][t]=0;
                else{
                    int left=-1e9;
                    int right=-1e9;
                    if(nums[ind]==0){
                        left=front[s+1][t];
                        right=front[s][t+1];
                    }
                    else if(nums[ind]>0){
                        if(t>=nums[ind]){
                            left=1+front[s][t];
                        }
                        else left=front[s][t];
                    }
                    else{
                        if(s>=abs(nums[ind])){
                            left=1+front[s][t];
                        }
                        else{
                            left=front[s][t];
                        }
                    }
                    curr[s][t]=max(left,right);
                }
            }
        }
        front=curr;
    }
    
    cout<<front[0][0];
    
}