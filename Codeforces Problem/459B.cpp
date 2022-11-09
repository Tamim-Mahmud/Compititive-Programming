//vaitamim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll B(ll n,ll a[],ll minimum,ll maximum)
{
    ll x=0,y=0;
    for(ll i=0; i<n; i++)
    {
        if(a[i]==minimum) x++;
        if(a[i]==maximum) y++;
    }
    return (x*y);
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll minimum=INT_MAX,maximum=INT_MIN,maxDif;

    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<minimum)
        {
            minimum=a[i];

        }
        if(a[i]>maximum)
        {
            maximum=a[i];
        }
    }
    maxDif=maximum-minimum;
    ll maxi;
    if(minimum==maximum)
    {
        if(n%2==0)maxi=(n/2)*(n-1);
        else maxi=(n/2)*n;
        cout<<maxDif<<" "<<maxi;
        return 0;
    }
    maxi= B(n,a,minimum,maximum);
    cout<<maxDif<<" "<<maxi;

}
