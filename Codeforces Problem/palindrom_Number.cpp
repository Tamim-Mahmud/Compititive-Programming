#include<bits/stdc++.h>
using namespace std;
#define ll long long
int pnum(ll n){
    static ll a=0;
    
    if(n>0){
       
        a=a+(n%10);
        pnum(n/10);

    }
    return a;
}
int palindrom(ll n){
    static ll s=0;
    if(n>0){
        s=(s*10)+(n%10);
        palindrom(n/10);
    }
    return s;
}

int main(){
  ll n;
  cin>>n;
   
ll  x=pnum(n);
ll y=palindrom(x);

if(x==y)cout<<"1";
else cout<<"0";

}
