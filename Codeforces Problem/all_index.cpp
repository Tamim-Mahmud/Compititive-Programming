#include<bits/stdc++.h>
using namespace std;
void allIndices(int arr[],int n,const int m){
    if(n<0)return;

    if(arr[n]!=m){
        arr[n]=0;
    }
    allIndices(arr,n-1,m);
}
int main(){
    int n;cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;cin>>m;
    allIndices(arr,n-1,m);
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i<<" ";
        }
    }

}
