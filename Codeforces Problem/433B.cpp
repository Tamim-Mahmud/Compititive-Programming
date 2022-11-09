#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;cin>>n;

    long long ara1[n+3]={0},ara2[n+3]={0};
    for(int i=1;i<=n;i++){
        cin>>ara1[i];
        ara2[i]=ara1[i];
    }
    for(int i=1;i<=n;i++){
        ara1[i]=ara1[i-1]+ara1[i];
    }

    sort(ara2+1,ara2+n+1);
    for(int i=1;i<=n;i++){
        ara2[i]=ara2[i-1]+ara2[i];
    }

    int m;cin>>m;
    
    while(m--){
        int type,l,r;
        cin>>type>>l>>r;
         long long temp=0;
        if(type==1){
           cout<<ara1[r]-ara1[l-1]<<endl;
        }
        else if(type==2){
            cout<<ara2[r]-ara2[l-1]<<endl;
        }
        

    }


}