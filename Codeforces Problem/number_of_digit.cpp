#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ans=0;
int digit(int n){
    if(n==0){
        return 0;
    }

    return digit(n/10)+1;


}
int main(){
    ll n;cin>>n;
    cout<<digit(n);
}
