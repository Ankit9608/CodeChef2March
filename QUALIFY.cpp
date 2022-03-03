#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,a,b,c;
        cin>>x>>a>>b;
        c=a+(2*b);
        if(c>=x){
            cout<<"QUALIFY"<<endl;
        }
        else{
            cout<<"NOT QUALIFY"<<endl;
        }
    }
    return 0;
}