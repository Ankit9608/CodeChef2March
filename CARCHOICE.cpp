#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,y1,y2;
        float c1,c2;
        cin>>x1>>x2>>y1>>y2;
        c1=y1/x1;
        c2=y2/x2;
        if(c1>c2){
            cout<<"1"<<endl;
        }
        else if(c1<c2){
            cout<<"-1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        
    }
    return 0;
}