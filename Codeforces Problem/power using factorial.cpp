#include<bits/stdc++.h>

using namespace std;
long long pow(const int n,int m)
{
    if(m==0)
    {
        return 1;
    }

    long long small=pow(n,m-1);
    return small*n;
}
int main()
{
    int n,m;
    cin>>n>>m;

    cout<<pow(n,m);
}
