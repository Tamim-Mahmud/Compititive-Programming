//vaitamim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;

    map<char, ll> p;
    for(int i=0;i<s.length();i++){
        //char a=s[i];
        p[s[i]]++;
        //p.second+=1;
    }

    ll odd=0;
    map<char, ll >:: iterator it=p.begin();
    while(it!= p.end()){
        ll d=it->second;
        if(d%2!=0){
            odd++;
        }
        it++;
    }

    if(odd==0 || odd==1 || odd%2 !=0)cout<<"First";
    else cout<<"Second";

}
