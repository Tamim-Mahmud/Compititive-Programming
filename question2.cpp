#include<iostream>
using namespace std;

int main(){
    double weight_OD,ac,weight_agrigate,mc;
    weight_OD = 26.5;
    ac=30.0;
    weight_agrigate=32.5;

    mc=((weight_agrigate - weight_OD)/weight_OD)*1000;

    cout<< "moisture content of the agrigate :"<<mc<<endl;

    if(ac==mc){
        cout<<"aggregate is in SSD"<<endl;
    }

    else cout<<"aggregate is not in SSD"<<endl;

}
