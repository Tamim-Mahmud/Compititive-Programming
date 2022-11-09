#include<bits/stdc++.h>
using namespace std;
int sum(int ar[],int n){
    if(n==0){
        return ar[0];
    }
    return sum(ar,n-1)+ar[n];
}
int main(){
    int arr[]={1,2,3};
    cout<<sum(arr,2);
}
