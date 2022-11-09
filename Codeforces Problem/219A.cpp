#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    int a[27]= {0};
    int x=0;
    for(int i=0; i<s.size(); i++)
    {

        a[s[i]-'a']++;
        x++;
    }
    for(int i=0;i<27;i++){
        if(i>0 && a[i]%k!=0){
            cout<<"-1";
            return 0;
        }
    }
    char ch[s.size()];
    int m=0;
    while(x>=0){
          for(int i=0;i<27;i++){
            if(a[i]>0){
                int l=a[i]/k;
                for(int j=0;j<l;j++){
                    ch[m]=(i+'a');
                }
                x-=l;
                m++;
            }
        }
    }

 for(int i=0;i<s.size();i++){
                cout<<ch[i];
           }
}
