//vaitamim
#include<bits/stdc++.h>
using namespace std;

void findPattern(int n){
    for(int i=1;i<=n;i++){
        for(int space=1;space<=(n-i);space++){
            cout<<"  ";
        }
        int k=0,x=i-1;
        for(int num=0;num<((i+i)-1);num++){
            if(num<=i-1){
                cout<<num;
           }
           else{
                x--;
           cout<<x;

           }
           if((num+1)!=(i+i-1)){cout<<" ";}
        }

        cout<<endl;
    }

    for(int i=n-1;i>0;i--){
            //cout<<" ";
        for(int space=0;space<n-i;space++){

            cout<<"  ";
        }
        int x=i-1;
        for(int num=0;num<((i+i)-1);num++){
             if(num<=i-1){
                cout<<num;
           }
           else{
                x--;
           cout<<x;

           }
           if((num+1)!=(i+i-1)){cout<<" ";}
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cin>>n;
    findPattern(n+1);
}
