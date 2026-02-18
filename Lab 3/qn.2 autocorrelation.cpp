#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double R[20]={0.50,0.11,0.23,0.76,0.44,0.82,0.19,0.55,
                  0.33,0.91,0.02,0.67,0.48,0.12,0.59,0.31,
                  0.88,0.05,0.74,0.26};

    int i=4,m=2,N=20,M=7;
    double sum=0;

    for(int k=0;k<=M;k++)
    {
        int a=i+k*m-1;
        int b=i+(k+1)*m-1;
        sum+=R[a]*R[b];
    }

    double rho=sum/(M+1)-0.25;
    double sigma=sqrt(13*M+7)/(12*(M+1));
    double Z0=rho/sigma;

    cout<<"Sum = "<<sum<<endl;
    cout<<"rho = "<<rho<<endl;
    cout<<"Z0 = "<<Z0<<endl;

    if(Z0>=-1.96 && Z0<=1.96)
        cout<<"Numbers are Independent"<<endl;
    else
        cout<<"Numbers are Dependent"<<endl;
}

