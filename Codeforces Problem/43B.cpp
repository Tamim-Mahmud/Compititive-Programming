//vaitamim
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    map<char,int> m;


    for(int i=0;i<s1.size();i++){
        if(s1[i]!= ' '){
            m[s1[i]]++;
        }
    }
    map<char, int >::iterator it;

    for(int j=0;j<s2.size();j++){
        if(s2[j]!=' '){
            if(m[s2[j]]>0){
                m[s2[j]]-=1;
                continue;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
    }

    cout<<"YES";
    return 0;
}
