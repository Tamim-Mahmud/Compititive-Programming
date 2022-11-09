#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long a=0,temp2=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==200){
            temp2++;
            a+=2;
        }
        else a+=1;
    }
    if(temp2==n){
        if(n%2==0){
            cout<<"YES";
            return 0;
        }
        else {
            cout<<"NO";
            return 0;
        }
    }
    if(a%2==0){
        cout<<"YES";
    }
    else cout<<"NO";
}
