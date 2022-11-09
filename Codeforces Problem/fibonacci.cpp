#include<bits/stdc++.h>
using namespace std;

int fibMemoization(int n,int f[]){
    if(n<=1){
        f[n]=n;
        return n;
    }
    else{
        if(f[n-2]==(-1)){
            f[n-2]=fibMemoization(n-2,f);
        }
        if(f[n-1]==(-1)){
            f[n-1]=fibMemoization(n-1,f);
        }
        return f[n-2]+f[n-1];
    }
}
int fib(int n){
    if(n<=1){
        return n;
    }
    else
        return fib(n-2)+fib(n-1);
}
int main(){
    int f[100]={0 };
    int n;cin>>n;
    //cout<<fib(n)<<endl;
   cout<<fibMemoization(n,f)<<endl;


}
