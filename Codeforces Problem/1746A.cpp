#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    int temp=0;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a>0){
            temp++;
        }
    }
    if(temp>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return;

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}