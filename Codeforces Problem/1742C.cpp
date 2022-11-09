#include <bits/stdc++.h>
using namespace std;
void solve(){
    char ara[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
           cin>>ara[i][j];
        }
    }

    for(int i=0;i<8;i++){
        int a=0;
        for(int j=0;j<8;j++){
            if(ara[i][j]=='R'){
                a++;
            }
        }
        if(a==8){cout<<"R"<<endl;return;}
    }
    for(int i=0;i<8;i++){
        int a=0;
        for(int j=0;j<8;j++){
            if(ara[j][i]=='B'){
                a++;
            }
        }
        if(a==8){cout<<"B"<<endl;return;}
    }

}
int main(){
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}