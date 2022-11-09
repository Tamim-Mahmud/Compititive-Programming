#include<bits/stdc++.h>
using namespace std;
void helpfunc(int a,int b);
void mainfun(int a,int b){
    if(a<=b){
        cout<<a<<" ";
        a+=1;
        helpfunc(a,b);
    }
}
void helpfunc(int a,int b){
    if(a<=b){
        cout<<a<<" ";
        a+=1;
        mainfun(a,b);
    }
}
int main(){
    mainfun(0,100);
}
