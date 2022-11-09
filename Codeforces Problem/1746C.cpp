#include<bits/stdc++.h>
using namespace std;
#define ll long
void solve(){
  ll n;cin>>n;
  ll ara[n+1];

  for(ll i=1;i<=n;i++){
    ll a;cin>>a;
    ara[a]=i;

  }
  for(ll i=1;i<=n;i++){
    cout<<ara[i]<<" ";
  }
  cout<<endl;


}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}