#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ara[n];
        for(int j=0;j<n;j++){
            cin>>ara[j];
        }
        for (int j=0;j<n-1;j++){
            int minimum=j;
            int x=0;
            for(int k=j+1;k<n;k++){
                if(ara[k]<ara[minimum]){
                    minimum=k;
                    x++;
                }
            }
            if(x>0){
                swap(ara[j],ara[minimum]);
                break;
            }
        }
        for(int k=0;k<n;k++){
            cout<<ara[k]<<" ";
        }
        cout<<endl;
    }
}
