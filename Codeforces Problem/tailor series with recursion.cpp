#include<bits/stdc++.h>
using namespace std;

double tailor(int x,int n){
    static double p=1,f=1;
    if(n==0) return 1;
    else{
        double r=tailor(x,n-1);
        p*=x;
        f*=n;
        return r+p/f;
    }
}
int main(){
    cout<<tailor(1,10);
}
