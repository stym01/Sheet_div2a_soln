#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    long long l,r;
    cin>>l>>r;
    if(l%2==0 && r-l+1>=3){
        cout<<l<<" "<<l+1<<" "<<l+2;
    }
    else if(l%2==1 && r-l+1>3){
        cout<<l+1<<" "<<l+2<<" "<<l+3;
    }
    else cout<<-1;
    
}








// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     freopen("input.txt", "r", stdin); 
//     freopen("output.txt", "w", stdout); 

//     long long l,r;
//     cin>>l>>r;
//     vector<int>ans;

//     for(int i=l;i<=r;i++){
//         for(int j=i+1;j<=r;j++){
//             if(__gcd(i,j)==1){
//                 for(int k=j+1;k<=r;k++){
//                     if(__gcd(i,k)>1 && __gcd(j,k)==1){
//                         ans={i,j,k};
//                     }
//                 }
//             }
//         }
//     }
//     if(ans.size()==0) cout<<-1;
//     else{
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i];
//             if(i!=ans.size()-1) cout<<" ";
//         }
//     }
// }