#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    map<int ,int>m;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        m[a]++;
    }
    map<int,int>::iterator it;
    int temp=0;
    for(it=m.begin();it!=m.end();it++){
        if(it->second<=((n+1)/2)){
            temp++;
        }
    }
    if(temp==m.size()){
        cout<<"YES";
    }
    else cout<<"NO";
}
