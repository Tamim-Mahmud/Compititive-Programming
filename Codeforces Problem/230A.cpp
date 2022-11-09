//vaitamim
#include<bits/stdc++.h>
using namespace std;
struct dragon
{
    int dStrength,bonus;
};
bool cmp(struct dragon a, struct dragon b)
{
    return a.dStrength<b.dStrength;
}
int main()
{
    int strength,n;
    cin>>strength>>n;
    dragon arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i].dStrength;
        cin>>arr[i].bonus;

    }

    sort(arr,arr+n,cmp);

    int k=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i].dStrength>=strength){

            k=1;
            break;
        }
        else{

            strength+=arr[i].bonus;
        }

    }
    if(k==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }


}
