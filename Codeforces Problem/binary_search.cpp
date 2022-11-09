#include<bits/stdc++.h>
using namespace std;
bool binary_search(int a[],int f,int size,int l,int h){
    if(h>=l){
        int mid=(l+h)/2;
        if(a[mid]==f){
            return true;
        }
        if(a[mid]>f){
            return binary_search(a,f,size,l,mid-1);
        }
        return binary_search(a,f,size,mid+1,h);
        
    }
    return false;
}
int main(){
    int a[]={1,2,3,4,5};

  
    int b =binary_search(a,1,4,0,4);  cout<<b;
}