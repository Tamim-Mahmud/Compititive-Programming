#include<bits/stdc++.h>
using namespace std;
static int ans=0;
int total_count(int ara[],int l,int mid,int h){
    int t=0;
    int i,j,k;
    int n1=mid-l+1;
    int n2=h-mid;

    int leftArrayy[n1],rightArray[n2];

    for(int i=0;i<n1;i++){
        leftArrayy[i]=ara[l+i];
    }

    for(int j=0;j<n2;j++){
        rightArray[j]=ara[mid+j+1];
    }
    i=0;j=0;k=l;
    while(i<n1 && j<n2){
        if(leftArrayy[i]<=rightArray[j]){
            ara[k]=leftArrayy[i];
            i++;
        }
        else{
            ara[k]=rightArray[j];
            j++;
            t+=mid-i;
        }
        k++;
    }
    while(i<n1){
        ara[k]=leftArrayy[i];
        i++;
        k++;
    }
    while(j<n2){
        ara[k]=rightArray[j];
        j++;
        k++;
    }
    return t;

}
int count_inversion(int ara[],int l,int h){
    int count =0;
    if(l<h){
        int mid=(l+h)/2;
        int left=count_inversion(ara,l,mid);
        int right=count_inversion(ara,mid+1,h);
        int total=total_count(ara,l,mid,h);
        return left+right+total;
    }
    return count;
}
int main(){
    int a[]={5,4,2,3,1};
    cout<<count_inversion(a,0,4);
    

    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<" ";
    // }

}