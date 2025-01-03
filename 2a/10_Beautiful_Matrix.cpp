#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int count=0;
    int n=5;
    int a[5][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>a[i][j];}
    }
    int row,col;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
       if(a[i][j]==1)
       {
           row=i;
           col=j;
           
       }
        }
    }
    if(row<2){
            while(row<2){
        row++;
        count++;
    }}
    else if(row>2){
    while(row>2){
        row--;
        count++;
    }}
 
    if(col<2){
    while(col<2){
        col++;
        count++;
    }}
    else if(col>2){
    while(col>2) {
        col--;
        count++;
    }}
    if(row==2 && col==2)
    cout<<count;
 
    return 0;
}