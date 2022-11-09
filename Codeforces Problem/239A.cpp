#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll y,k,n;
    cin>>y>>k>>n;
    if(n<=y || (n/k == y/k)){
        cout<<-1;
        return 0;
    }
    else{
            ll x;
        if(y<k){
            x=k-y;

        }
        else if(y>k){
            x=k*((y/k)+1)-y;

        }
        else x=k;
        ll temp=((n)-n%k)-y;
        for(ll i=x;i<=temp;i+=k){
            cout<<i<<" ";
            }
        }

    return 0;
}

