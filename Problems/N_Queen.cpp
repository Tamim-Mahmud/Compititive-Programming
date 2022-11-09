#include<bits/stdc++.h>
using namespace std;

 bool isSafe(int a,int x, int y,int n){
     for(int i=x;i>=y;i--){
         if(a[x][y]==1){
             return false;
         }
     }
    int row=x,col=y;
     while(row>=0 && col>=0){
        
        if(a[row][col]==1){
            return false;
        }
        row--;
        col--;
     }
     row=x,col=y;
     while(row>=0 && col<n){
        
        if(a[row][col]==1){
            return false;
        }
        row--;
        col++;
     }
     return true;

 }

void N_Queen(int[]  a , int x,){

}
int main(){
    int n;cin>>n;
    int a[n][n]={0};

   
    N_Queen(a,n);
}