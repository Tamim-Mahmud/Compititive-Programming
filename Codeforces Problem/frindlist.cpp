#include<bits/stdc++.h>
using namespace std;

int main(){
     int f;

     cin>>f;
     int ara[1001];
     for(int i=0;i<1001;i++){
        ara[i]=0;
     }
     for(int i=0;i<f;i++){
        int a,b;
        cin>>a>>b;
        ara[a]++;
        ara[b]++;
     }
     int ans;
     int maxx=ara[0];
     for(int i=1;i<1001;i++){
        if(ara[i]>maxx){
            maxx=ara[i];

        }
     }
     int countt=0;
     for(int i=0;i<1001;i++){
        if(ara[i]==maxx){
            countt++;
        }
     }
     cout<<countt<<endl;
     for(int i=0;i<1001;i++){
        if(ara[i]==maxx){
            cout<<i+1<<" ";
        }
     }
}
