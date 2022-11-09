#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;cin>>n;
    ll lessZero=0,greaterZero=0;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        if(a<0)lessZero+=a;
        else greaterZero+=a;
    }
    ll temp=abs(lessZero);
    if(abs(temp>greaterZero)) cout<<temp-greaterZero<<endl;
    else cout<<greaterZero-temp<<endl;
}
int main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
}