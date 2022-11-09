#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void solve(){
    int n;cin>>n;
    int h,m;cin>>h>>m;

    int ara[24]={-1};
    int flag=0;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;

        ara[a]=b;
        if(a==h&& b==m)flag++;
        
    }
    if(flag==1){cout<<"0 0"<<endl;return;}
    int hour=0,min=0; min+=60-m;
    int temp=h+1;
    while(1){
        if(ara[temp]!=-1){
            if(flag==1){
                if(ara[temp]!=-1){
                    hour+=temp-0;
                    min+-ara[temp];
                    break;
                }
            }
            hour+=temp-h-1;
            min+=ara[temp];
            break;
        }
        temp++;
        if(temp==23){
            temp=0;
            flag=1;
        };

    }
    if(min>60){
        hour+=1;
        min-=60;
    }
    cout<<hour<<" "<<min<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}