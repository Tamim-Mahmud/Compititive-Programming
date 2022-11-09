#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int smallOut1=fibonacci(n-1);
    int smallOut2=fibonacci(n-2);

    return smallOut1+smallOut2;
}
int main(){
    cout<<fibonacci(5);
}
