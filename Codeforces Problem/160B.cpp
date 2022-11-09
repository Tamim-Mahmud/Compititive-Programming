#include<bits/stdc++.h>
using namespace std;

int main(){
     long long n,n1;
    string s;
    cin>>n>>s;
    int ara1[n],ara2[n];
    for(int i=0;i<n*2;i++){
        if(i<n){
            ara1[i]=s[i]-48;
        }
        else
            ara2[i-n]=s[i]-48;
}

    sort(ara1,ara1+n);
    sort(ara2,ara2+n);
    int temp=0;
    if(ara1[0]<ara2[0]){
            temp=1;
        for(int i=1;i<n;i++){
            if(ara1[i]<ara2[i])
                temp++;
            }
        }
    if(ara1[0]>ara2[0]){
        temp=1;
        for(int i=1;i<n;i++){
            if(ara1[i]>ara2[i])
                temp++;
            }
    }
    if(temp==n)cout<<"YES";
    else cout<<"NO";

    return 0;
}

