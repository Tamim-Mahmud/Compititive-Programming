#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;cin>>n;

    int arr[n];

    set<int> s;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a==7 || a==5){
            cout<<"-1";
            return 0;
        }
        arr[i]=a;
        s.insert(a);
    }

    sort(arr,arr+n);

    if(s.size()>=(3)){
        for(ll i=0;i<n/3;i++){
            ll x=arr[i];
            ll b=arr[i+(n/3)];
            ll c=arr[i+((n/3)*2)];

            if((b%x==0) && (c%b==0)){
                cout<<x<<" "<<b<<" "<<c<<endl;
            }
            else {
            cout<<"-1";
            return 0;
            }
        }

    }
    else cout<<"-1";
}
