#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

// int factorial(int n){
//     int cnt = 1;

//     for(int i=n; i>=1; i--){
//         cnt *= i;
//     }

//     return cnt;
// }

void solve(){  // candies eaten by aleya
     ll n;
     cin>>n;


     string s;
     cin>>s;

     int res = n-1;

     for(int i=1; i+1 < n; ++i){
          if(s[i-1] == s[i+1]){
              res--;
          }
     }

     cout<<res<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
