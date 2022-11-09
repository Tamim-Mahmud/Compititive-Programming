#include<bits/stdc++.h>
using namespace std;

int main(){
    int* np;
    cin>>*np;
    //int* np=&n;
    int* ara=new int[*np];
    for(int i=0;i<*np;i++){
        cin>>*(ara+i);
    }
    for(int i=0;i<*np;i++){
        cout<<(*ara+i);
    }
    //int* max=ara;
    for(int i=1;i<*np;i++){
        if(*ara<*(ara+i)){
            *ara=(*ara+i);
        }
    }
    cout<<*ara;
}
