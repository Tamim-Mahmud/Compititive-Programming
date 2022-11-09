#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;cin>>s;
    ll t=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='0'){
            s.erase(s.begin()+i);
            break;
        }
        if(s[i]=='1')t++;

    }
    if(t==s.size()){
        s.erase(s.begin());
    }
    cout<<s;
}
