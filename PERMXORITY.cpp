// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++){
//            a[i]=n-i;
//         }
//         int i,j;
//         for( i=0;i<n;i++){
//             for( j=1;j<=n;j++){
//                 if((abs((a[i]-a[j]))^abs((a[i+1]-a[j+1])))!=0){
//                         break;
//                 }
//             }  
//         }
//         if(i==n-1&&j==n){
//             for(i=0;i<n;i++){
//                 cout<<a[i]<<" ";
//             }
//         }
    

        
//     }
//     return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll ,ll>
using namespace std;
const ll z = 998244353 ;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    
    if(n==2){
        cout<<"-1";
        continue;
    }
    if(n%2==1){
        for(int i=1;i<=n;i++){
            cout<<i<<' ';
            
        }
        cout<<endl;

    }
    else{
        cout<<2<<' '<<3<<' '<<1<<' ';
        for(int i=4;i<=n;i++){
            cout<<i<<' ';
        }
        cout<<endl;
    }
 }
 return 0;

} 

// #include<bits/stdc++.h>
// #define ll long long
// #define pll pair<ll ,ll>
// using namespace std ;
// const ll z = 998244353 ;


// int main()
// {

//     int t ;
//     cin >> t ;
//     while(t--)
//     {
//         int n ;
//         cin >> n ;
        
//         if(n == 2)
//         {
//             cout << -1 << endl ;
//             continue ;
//         }

//         if(n%2 == 1)
//         {
//             for(int i = 1 ; i <= n ; i++)
//                 cout << i << ' ';
//             cout << endl ;
//         }
//         else
//         {
//             cout << 2 << ' ' << 3 << ' ' << 1 << ' ';
//             for(int i = 4 ; i <= n ; i++)
//                 cout << i << ' ';
//             cout << endl ;
//         }
//     }

//     return 0;
// }