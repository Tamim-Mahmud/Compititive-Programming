#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;cin>>n;
    ll zero=0,one=0;
    vector<ll> v;
    string s;cin>>s;
    ll flag=0,ans=0;
    for(ll i=0;i<=n-2;i++){
        if(s[i]>s[i+1] && flag==0){
            flag=1;
            
            ans++;
           
        }
        else if(flag==1 && s[i]!=s[i+1]){ans++;}
    }
    cout<<ans<<endl;

    
    
}
int main(){
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}