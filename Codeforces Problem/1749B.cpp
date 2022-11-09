#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool compare(const pair<ll,ll> &ob1,const pair<ll,ll> &ob2 ){
    return (ob1.second<ob2.second);
}
void solve(){
    int n;cin>>n;
   vector<pair<ll,ll>>  v;
     vector<ll> v1,v2;ll a;
    for(int i=0;i<n;i++){
        cin>>a;
        v1.push_back(a);
      }
      for(int i=0;i<n;i++){
        cin>>a;
        v2.push_back(a);
        v.push_back(make_pair(v1[i],v2[i]));
      }
    sort(v.begin(),v.end(),compare);
    ll ans=0;
    ll temp=0;

    //  for(int i=0;i<n;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    for(int i=0;i<n;i++){
        ans+=v[i].first+temp;
        temp=v[i].second;
    }
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}