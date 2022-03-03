#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       int count=8;
       for(int i=0;i<n;i++){
           if((a[i]%7>=1)&&(a[i]%7<=5)){
               count++;
           }
           
               
           
       }
       cout<<count<<endl;

    }
}