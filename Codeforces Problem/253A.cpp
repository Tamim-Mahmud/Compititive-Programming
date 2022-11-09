#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>n>>m;

    if(n>=m)
    {
        while(n>0 || m>0)
        {
            if(n>0)
            {
                cout<<"B";
                n--;
            }
        if(m>0)
            {
            cout<<"G";
            m--;
            }
        }

    }
    if(n<m)
    {
        while(n>0 ||m>0)
        {
            if(m>0)
            {
                cout<<"G";
                m--;
            }
            if(n>0)
            {
                cout<<"B";
                n--;
            }
        }

    }
    return 0;

}


