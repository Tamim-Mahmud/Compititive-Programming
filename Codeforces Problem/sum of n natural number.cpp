#include<bits/stdc++.h>
using namespace std;
int pow(int m,int n){
    int pow=1;
    for(int i=1;i<=n;i++){
        pow*=m;
    }
    return pow;
}
int main(){
    cout<<pow(2,4);
}
