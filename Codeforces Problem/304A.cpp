#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j++){
            double temp=sqrt((i*i)+(j*j));
            int temp1=sqrt((i*i)+(j*j));

            if(temp==temp1 && temp1 <=n){
                ans++;
            }
        }
    }
    cout<<ans;

}
