#include<bits/stdc++.h>
using namespace std;
int airport(int n, int m, int a[]){
    int maxSum=0;
    for(int i=0;i<n;i++){
        sort(a,a+m);
        if(a[m-1]>0){
        maxSum+=a[m-1];
        a[m-1]--;
        }
    }

    return maxSum;
}
int minAirport(int n, int m, int a[]){
    int minSum=0;
    int j=0;
    sort(a,a+m);
    for(int i=0;i<n;i++){
        if(a[j]>0){
            minSum+=a[j];
            a[j]--;
        }
        else{
            j++;
            minSum+=a[j];
            a[j]--;;
        }
    }

    return minSum;
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int b[m];
    copy(a,a+m,b);

    cout<<airport(n,m,a)<<" "<<minAirport(n,m,b);

}
