#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long ara[10000001]={0};
int main(){

    ll a,b,c;cin>>a>>b>>c;

    long long sum=0;
    ll temp=(a*b*c);
    for(ll i=1;i<=temp;i++){
        for(ll j=i;j<=temp;j+=i){
            ara[j]++;
        }
    }
    ll mod=1073741824;
    for(ll i=1;i<=a;i++){
        for(ll j=1;j<=b;j++){
            for(ll k=1;k<=c;k++){
                sum+=ara[i*j*k];
                sum=sum%mod;
            }
        }
    }

    cout<<sum;
}
