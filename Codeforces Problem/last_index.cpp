#include<bits/stdc++.h>
using namespace std;
int ar2[1001];

void findIndex(int arr[],int n,const int m)
{
    if(n==-1)
    {
        return;
    }
    if(arr[n]==m)
    {
        ar2[n]=n;
    }
    findIndex(arr,n-1,m);



}
int main()
{
    memset(ar2,-1,sizeof(ar2));
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;

    findIndex(arr,n-1,m);

    for(int i=0; i<n; i++)
    {
        if(ar2[i]!=-1)
        {
            cout<<ar2[i]<<" ";
        }
    }
}


