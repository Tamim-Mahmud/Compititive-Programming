#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    
    int a,b,c,k,temp;
    cin>>a>>b>>c;
    int ans=0;
    
    for(int i=0;a*i<=n;i++){
        for(int j=0;a*i+b*j<=n;j++){
           temp= n-((i*a) + (j*b));

            if(temp%c==0){
               k = temp/c;
            }
            int temp2= a*i +b*j + c*k;
            if(temp2==n){
                ans=max(ans,i+j+k);
            }
            
        }
    }
    cout<<ans<<endl;
   

}