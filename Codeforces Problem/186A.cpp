#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s1,s2;

    cin>>s1>>s2;

    vector<char>ch;
    if(s1.size()!= s2.size()){
        cout<<"NO";
        return 0;
    }
    for(ll i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            ch.push_back(s1[i]);
            ch.push_back(s2[i]);
        }
    }
   // cout<<ch.size()<<endl;
    if(ch.size()==4 && ch[0]==ch[3] && ch[1]==ch[2]){
        cout<<"YES";
    }
    else cout<<"NO";
}
