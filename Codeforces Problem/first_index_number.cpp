#include<bits/stdc++.h>
using namespace std;
int a=0;
int findIndex(int arr[],int n,const int m){
    if(n<0){
        return -1;
    }
    if(arr[n]==m){
        a=n;
    }
    findIndex(arr,n-1,m);
    return a;

}
int main(){
    int n;cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;cin>>m;
    cout<<findIndex(arr,n-1,m);
}
