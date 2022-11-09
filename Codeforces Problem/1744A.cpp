#include<bits/stdc++.h>
using namespace std;
#define ll long
void solve(){
    int n;cin>>n;

    int ara[n];

    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    string str;cin>>str;
    int temp;char ch;
    for(int i=0;i<n;i++){
        ch=str[i];
        temp=ara[i];
        for(int j=i+1;j<n;j++){
            if(ara[j]==temp && str[j] != ch){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}