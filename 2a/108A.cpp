#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int minutes=stoi(s.substr(0,2))*60 + stoi(s.substr(3,5));
    unordered_map<int,string>mpp;
    mpp[0]="00:00";
    mpp[1]="01:10";
    mpp[2]="02:20";
    mpp[3]="03:30";
    mpp[4]="04:40";
    mpp[5]="05:50";
    mpp[6]="10:01";
    mpp[7]="11:11";
    mpp[8]="12:21";
    mpp[9]="13:31";
    mpp[10]="14:41";
    mpp[11]="15:51";
    mpp[12]="20:02";
    mpp[13]="21:12";
    mpp[14]="22:22";
    mpp[15]="23:32";
    vector<int>temp(16);
    for(int i=0;i<16;i++){
        string str=mpp[i];
        int minutes=stoi(str.substr(0,2))*60 + stoi(str.substr(3,5));
        temp[i]=minutes;
    }
    int ind=upper_bound(temp.begin(),temp.end(),minutes)-temp.begin();
    // cout<<ind;
    if(ind==16){
        cout<<mpp[0];
    }
    else{
        cout<<mpp[ind];
    }
}