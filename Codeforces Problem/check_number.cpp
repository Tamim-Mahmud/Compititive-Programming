#include<bits/stdc++.h>
using namespace std;
bool check(int arr[], int n, const int &m){
    if(arr[n]==m){
        return true;
    }
    if(n<0){
        return false;
    }
    check(arr,n-1,m);
}
int main(){
    int n;cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;cin>>m;
    //string a="true";
   // string b="false";
   int ans=check(arr,n-1,m);
   if(ans==1)cout<<"true";
   else cout<<"false";
}
