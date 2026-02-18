#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double R[25] = {0.08,0.12,0.95,0.34,0.11,
                    0.56,0.77,0.21,0.04,0.66,
                    0.43,0.19,0.82,0.55,0.27,
                    0.03,0.99,0.41,0.15,0.60,
                    0.88,0.32,0.14,0.71,0.22};

    int N = 25;
    int i = 1;
    int m = 5;

    int M = 3;   // calculated earlier

    double sum = 0;
    for(int k=0; k<=M; k++)
    {
        int a = i + k*m - 1;
        int b = i + (k+1)*m - 1;
        sum += R[a] * R[b];
    }

    double rho = (sum/(M+1)) - 0.25;
    double sigma = sqrt(13*M + 7) / (12*(M+1));
    double Z0 = rho / sigma;

    cout<<"Sum = "<<sum<<endl;
    cout<<"rho hat = "<<rho<<endl;
    cout<<"Sigma = "<<sigma<<endl;
    cout<<"Z0 = "<<Z0<<endl;

    if(Z0>=-1.96 && Z0<=1.96)
        cout<<"Numbers are Independent (H0 Accepted)"<<endl;
    else
        cout<<"Numbers are Dependent (H0 Rejected)"<<endl;

    return 0;
}

