#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
    ll n,k; cin>>n>>k;
    ll arr[n+10];

    for(ll i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll temp=arr[k];
    for(ll i=k;i<=n;i++){
        if(arr[i]!=temp){
            cout<<"-1";
            return 0;
        }
    }
    for(ll i=k-1;i>=1;i--){
        if(arr[i]!=temp){
            cout<<i;
            return 0;
        }
    }
    cout<<"0";

}
