#include<bits/stdc++.h>
using namespace std;
#define ll long
void solve(){
    ll n;cin>>n;
    vector<int> v;
    ll one=0,zero=0;
    for(ll i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
        if(v[i]==1)one++;
        else zero++;
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(v[i]==1 &&  zero>0){
            ans++;
            zero--;
        }
       else if(v[i]==0){
            zero--;
        }
        if(zero==0){cout<<ans<<endl;return;}
    }
}
int main(){
    long t;cin>>t;
    while(t--){
        solve();
    }
}