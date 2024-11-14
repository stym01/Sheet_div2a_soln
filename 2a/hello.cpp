#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

    int n,p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    vector<pair<int,int>>arr;
    int first,second,third;
    first=second=third=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        first+=y-x;
        arr.push_back({x,y});
    }
    int e=arr[0].second;

    for(int i=1;i<n;i++){

        int l=arr[i].first;
        int r=arr[i].second;

        int gap=l-e;
        if(gap>=t1+t2){
            first+=t1;
            second+=t2;
            third+=gap-t1-t2;
        }
        else if(gap>=t1){
            first+=t1;
            second+=gap-t1;
        }
        else {
            first+=gap;
        }
        e=r;
    }
    int power=first*p1+second*p2+third*p3;
    cout<<power<<endl;
    
}