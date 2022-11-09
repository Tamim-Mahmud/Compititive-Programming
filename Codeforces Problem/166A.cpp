#include<bits/stdc++.h>
using namespace std;
struct Result{
    int solve,penalty;
};
bool compare(Result a,Result b){
    if(a.solve==b.solve){
        return (a.solve+a.penalty) < (b.solve+b.penalty);
    }
    return a.solve > b.solve;
}

int main(){
        int n,k;
    cin>>n>>k;
   
    struct Result arr[n];
    

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[i].solve=a;
        arr[i].penalty=b;
    
    }
    
    sort(arr,arr+n,compare);
    
    struct Result temp;
    temp.solve=arr[k-1].solve;
    temp.penalty=arr[k-1].penalty;
   
    int ans=0;
    for(int i=0;i<n;i++){
        if(temp.penalty==arr[i].penalty && temp.solve==arr[i].solve){
            ans++;
        }
    }
    
    cout<<ans<<endl;

}