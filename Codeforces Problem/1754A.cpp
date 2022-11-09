#include<bits/stdc++.h>
using namespace std;
#define ll long
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int q=0,a=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='Q'){
            q++;
        }
        if(s[i]=='A')a++;
        if(s[i]=='A' && q>0){
            a--;
            q--;
        }

    }
    if(q==0 && a>=0 ){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}