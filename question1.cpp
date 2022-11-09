#include<iostream>
using namespace std;

int main()
{

    double p,a,l,m,x,z;
    cout<<"Enter Student id : ";
    cin>>z;
    p=z+18;
    l=z+12;

    a=5;

    for(double x=0; x<=l; x+=0.5)
    {

        if(x>=0 &&x<=5)
        {
            m=((p*a*(l-a))/l);
        }
        if(x>5 &&x<=l)
        {
            m=((p*a*(l-a))/l)*(1+(x-a)/(a-l));
        }

        cout<< "when l= "<<x<<" ft, moment = "<<m<<endl;
    }

    return 0;

}
