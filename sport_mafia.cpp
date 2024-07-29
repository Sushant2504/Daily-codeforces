#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){  // candies eaten by aleya
      
    ll n, k;
    cin>>n>>k;

    vector<int> v;

    ff(n){
        int temp = (i*(i+1))/2;
        v.push_back(temp);
    }

    int low = 0, high = n;
    int mid = low + (high-low)/2;
    int temp = mid - (n-mid);
    while(temp!=k){
        if(temp<k){
            low = mid+1;
        }else {
            high = mid;
        }
        mid = low + (high-low)/2;
        temp = mid - (n-mid);
    }

    cout<<temp<<endl;
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}