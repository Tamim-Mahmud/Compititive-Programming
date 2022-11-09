#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long
void solve(){
   ll n;cin>>n;

   vector<ll> v;
   
   
   for(ll i=0;i<n;i++){
    ll a;cin>>a;
    v.push_back(a);
   }ll result=v[0];

   for(ll i=0;i<n;i++){
    result=__gcd(result,v[i]);

    if(result==1){cout<<0<<endl;return;}
   }

   if(__gcd(__gcd(v[n-1],n),result)==1){cout<<1<<endl;}
   else if(__gcd(__gcd(v[n-2],n-1),result)==1){cout<<2<<endl;}
   else cout<<3<<endl;


}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}