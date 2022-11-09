//vaitamim
#include<bits/stdc++.h>
using namespace std;
void chessBoard(int n, int m,char a[100+1][100+1])
{
   for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='.'){
                if(i%2!=0 && j%2 !=0 ||(i%2==0 && j%2 ==0) ){
                    a[i][j]='B';
                }
                else if(i%2 == 0 || j%2 ==0)
                    a[i][j]='W';
                }
            }
        }
   }


int main()
{
    int n,m;
    cin>>n>>m;
    char a[100+1][100+1];
    for (int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }

    }

    chessBoard(n,m,a);
    for (int i=1 ;i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

}
