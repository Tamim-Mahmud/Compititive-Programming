#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        float temp1=0.0,temp2=0.0;
        string s1,s2;
        cin>>s1>>s2;

        int i=s1.size()-1;
            if(s1[i]=='S'){
                temp1-=s1.size();
               
            }

           else if(s1[i]=='L'){
                temp1+=s1.size();
                
            }
           else if(s1[i]=='M'){
                temp1+=.5;
                
            }
            
            
        int j=s2.size()-1;
            if(s2[j]=='S'){
                temp2-=s2.size();
               
            }

           else if(s2[j]=='L'){
                temp2+=s2.size();
               
            }
           else if(s2[j]=='M'){
                temp2+=.5;
                
            }
        
        if(temp1>temp2)cout<<">"<<endl;
        if(temp1<temp2)cout<<"<"<<endl;
        if(temp1==temp2)cout<<"="<<endl;


    }
}

