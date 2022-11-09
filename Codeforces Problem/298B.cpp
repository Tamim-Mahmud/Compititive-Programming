#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll sx,sy,ex,ey;
    cin>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;

    ll ans;
    for(ll i=0; i<s.length(); i++)
    {
        if(s[i]=='E')
        {
            if(sx<ex)
            {
                sx++;

            }
        }
        else if(s[i]=='S')
        {
            if(sy>ey)
            {
                sy--;

            }
        }
        else if(s[i]=='W')
        {
            if(sx>ex)
            {
                sx--;

            }
        }
        else if(s[i]=='N')
        {
            if(sy<ey)
            {
                sy++;
            }
        }
         cout<<sx<<" "<<sy<<"     "<<ex<<" "<<ey<<endl;
        if(sx==ex && sy == ey)
        {
            cout<<(i+1);
           return 0;
        }


    }
    cout<<-1;
    return 0;
}
