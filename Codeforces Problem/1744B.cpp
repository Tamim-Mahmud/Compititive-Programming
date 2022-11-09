#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,q;cin>>n>>q;
    ll ans=0;
    ll even=0,odd=0;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        ans+=x;
        if(x%2==0)even++;
        else odd++;

    }

    for(ll i=0;i<q;i++){
        ll a,b;cin>>a>>b;
// cout<<even<<" "<<odd<<endl;
        if(a==0 && b%2==0){
            ans+=(even*b);
        }
        else if(a==0 && b%2 != 0){
            ans+=(even*b);
            ll temp=odd;
            odd+=even;
            if(even>0)even-=even;
        }
        else if(a==1 && b%2==0){
            ans+=(odd*b);
        }
        else if(a==1 && b%2 !=0){
            ans+=(odd*b);
            ll temp=even;
            even+=odd;
            if(odd>0)odd-=odd;
        }
  
        cout<<ans<<endl;  
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}