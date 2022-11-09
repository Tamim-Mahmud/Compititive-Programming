#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;cin>>n;
    n=n*2;
    ll sum=0;

   vector<int> ara[50001];

   for(ll i=0;i<n;i++){
        int a;cin>>a;
        ara[a].push_back(i+1);

        sum+=a;
   }
  if(sum%2!=0){
    cout<<-1;
    return 0;
  }

   for(ll i=0;i<5000;i+=1){
        for(int j=0;j<ara[i].size();j+=2){
            cout<<ara[i][j]<<" "<<ara[i][j+1]<<endl;
        }
        //cout<<ara[i].second+1<<" "<<ara[i+1].second+1<<endl;
   }

}
