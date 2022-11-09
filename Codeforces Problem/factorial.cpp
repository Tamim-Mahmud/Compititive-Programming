#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int smallOutput=factorial(n-1);
    int ans=n*smallOutput;
    return ans;
}
int main(){
    cout<<factorial(3);
}
