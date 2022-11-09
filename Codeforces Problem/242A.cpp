#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct segment{
    ll first,second,index;
};
bool cmp(segment a, segment b){
    ll x=abs(a.first-a.second);
    ll y=abs(b.first-b.second);

    return x>y;

}
int main(){
    ll n;
    cin>>n;
    segment v[n];
    for(ll i=0;i<n;i++){
      ll a,b;
      cin>>a>>b;
      v[i].first=a;
      v[i].second=b;
      v[i].index=i+1;
    }
   sort(v,v+n,cmp);

    int flag=0;
    for(int i=0;i<n;i++){
        ll a=v[i].first;
        ll b=v[i].second;
        flag=0;
        for(int j=0;j<n;j++){
            ll c=v[j].first;
            ll d=v[j].second;
            if(a<=c && b>=d){
                flag++;
            }
            else break;
        }
        if(flag==n){
            cout<<v[i].index;
            return 0;
        }
    }
    cout<<"-1";



}
