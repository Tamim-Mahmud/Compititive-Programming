#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int n,m,a;
    cin>>n>>m;
    int minN=INT_MAX, maxN=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<minN){
            minN=a;
        }
        if(a>maxN){
            maxN=a;
        }
    }
    int minM=INT_MAX,maxM=INT_MIN;
    for(int i=0;i<m;i++){
        cin>>a;
        if(a<minM){
            minM=a;
        }
        if(a>maxM){
            maxM=a;
        }
    }
    //cout<<minN<< " "<<maxN<<" "<<minM<< " "<<maxM<<" ";
    if((minN*2 <= maxN || minN*2<minM ) && (minM>maxN)){
        cout<<minN*2;
    }
    else
        cout<<-1;

}
