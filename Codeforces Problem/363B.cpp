#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,k;

    cin>>n>>k;
    ll ara[n],sum[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];

        if(i==0)
            sum[0]=ara[0];
        else
            sum[i]=sum[i-1]+ara[i];
    }
    ll cmp=INT_MAX,ans=0,x;
    for(int i=0;i<n-k+1;i++){
        if(i==0)
            x=sum[i+k-1];
        else
            x=sum[i+k-1]-sum[i-1];

        if(x<cmp){
            cmp=x;
            ans=i;
        }

    }
    cout<<ans+1;

}
