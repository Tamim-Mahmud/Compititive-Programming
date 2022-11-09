#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main(){
    ll n;cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        sum+=a;
    }
    if(sum%n==0)cout<<n;
    else cout<<n-1;

    return 0;

}
