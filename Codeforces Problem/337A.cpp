#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];

    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);

    int minimim=INT_MAX;
    for(int i=0;i<=(m-n);i++){
        if((arr[(i+n)-1]-arr[i])<=minimim){
            minimim=(arr[(i+n)-1]-arr[i]);
        }
    }
    cout<<minimim;
}
