#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    int v[n+1];

    for(int i=1;i<=n;i++){
        cin>>v[i];
}
    sort(v,v+n+1);
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(v[i]<0){
            ans+=i+(abs(v[i]))+1;
        }
        else if(v[i]>i){
            ans+=(v[i]-i);
        }
        else if(v[i]<i){
            ans+=(i-v[i]);
        }
        cout<<v[i]<<endl;
    }
    cout<<ans;
}