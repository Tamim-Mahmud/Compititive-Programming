//vaitamim
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,h;
    h="hello";
    cin>>s;
    int k=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==h[k]){
            k++;
        }
    }
    if(k==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
