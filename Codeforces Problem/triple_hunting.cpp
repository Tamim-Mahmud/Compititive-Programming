#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%3==0){
            v1.push_back(i+1);
        }
    }if(v1.size()>0){
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    }
    else cout<<"Nothing here ! ";
}
