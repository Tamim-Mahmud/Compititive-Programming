//vaitamim
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    map<ll,vector<ll> >m;
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        ll a;
        cin>>a;
        m[a].push_back(i);
    }
    vector<pair<ll,ll> > v;
    map<ll, vector<ll>> ::iterator it=m.begin();
    while(it != m.end()){
        ll k=it->first;

        if(m[k].size()==1){
            v.push_back(make_pair(k,0));
        }

        else{
            set<ll>s;

            for(ll i=1;i<m[k].size();i++){
                s.insert(abs(m[k][i]-m[k][i-1]));
            }
            set<ll> ::iterator p=s.begin();
            if(s.size()==1){
                v.push_back(make_pair(k,*p));
            }
        }
        it++;
    }
    cout<<v.size()<<endl;
    for (int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

}
