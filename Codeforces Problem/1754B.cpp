#include<bits/stdc++.h>
using namespace std;
#define ll long
void solve(){
  int n;cin>>n;
  int temp1=n/2,temp2=n;
  if(n%2!=0){cout<<n<<" ";temp2=n-1;}
  
  for(int i=0;i<n/2;i++){
    cout<<temp1<<" "<<temp2<<" ";
    temp1--;temp2--;
  }
  cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}