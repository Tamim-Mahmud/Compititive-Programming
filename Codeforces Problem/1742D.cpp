#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define ll long long
int main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        ll ans=0;
        int flag = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            for (ll j = i; j >= 0; j--)
            {
                if (__gcd(v[i], v[j]) == 1)
                {
                    flag++;
                    if(i+j+2>ans){
                        ans=i+j+2;
                    }
                }
            }
           
        }
        
        if (flag == 0)
            cout << -1 << endl;
            else cout<<ans<<endl;
    }
}