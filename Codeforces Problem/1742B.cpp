#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        int n;
        cin>>n;
        map<long long,long long>m;
    for(int i=0;i<n;i++){
        long long a;cin>>a;
        m[a]++;
    }
        
        int flag=0;
        map<long long, long long >::iterator it;
        for(it=m.begin();it!=m.end();it++){
            if(it->second>1){
               flag=1;
            }
        }
        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }
}