#include<bits/stdc++.h>
using namespace std;
#define ll long
void solve(){
    int n;cin>>n;
    if(n%2==0)cout<<n/2<<endl;
    else cout<<n/2+1<<endl;
    ll a=1,b=n*3;

    while(a<b){
       cout<<a<<" "<<b<<endl;
       a+=3;b-=3; 
    }

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}