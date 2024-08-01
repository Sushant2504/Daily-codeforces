#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long



void solve(){ 
    int n, x, y;
    cin>>n>>x>>y;

    x--; y--;

    vector<int> a(n, 1);
    int e;
    e = -1;

    for(int i=x+1; i<n; i++){
        a[i] = e;
        e *= -1;
    }

    e = -1;
    for(int i=y-1; i>=0; i--){
         a[i] = e;
         e *= -1;
    }

    for(int i=0; i<n; i++){
        if(i) {cout<<" ";}
        cout<<a[i];
    } cout<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
