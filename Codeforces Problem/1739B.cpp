#include<bits/stdc++.h>
using namespace std;
#define ll long
void solve(){
    int n;cin>>n;

    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }

    for(int i=1;i<n;i++){
        if(ara[i-1]-ara[i] <0 || (ara[i-1]-ara[i])==(ara[i-1]+ara[i]) ){
            ara[i]+=ara[i-1];
        }
        else{
            cout<<-1<<endl;
            return;
        } 

    }

      for(int i=0;i<n;i++){
        cout<<ara[i]<<" ";
        }
        cout<<endl;
    
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}