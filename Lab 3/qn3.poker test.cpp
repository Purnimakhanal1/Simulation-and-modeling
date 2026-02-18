#include <iostream>
using namespace std;

int main()
{
    double O[5]={1010,860,90,35,5};
    double P[5]={0.504,0.432,0.027,0.036,0.001};
    double N=2000;
    double chi=0;

    for(int i=0;i<5;i++)
    {
        double E=P[i]*N;
        chi+=(O[i]-E)*(O[i]-E)/E;
    }

    cout<<"Chi-square = "<<chi<<endl;

    if(chi>9.49)
        cout<<"Reject H0: Numbers are NOT independent"<<endl;
    else
        cout<<"Accept H0: Numbers are independent"<<endl;
}

