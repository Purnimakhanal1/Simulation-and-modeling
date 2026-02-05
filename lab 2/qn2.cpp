#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double X[5] = {0.54, 0.73, 0.98, 0.11, 0.68};
    int N = 5;
    double D_plus = 0.0, D_minus = 0.0;
    double D_critical = 0.565;   

    sort(X, X + N);

    for (int i = 0; i < N; i++) {
        double Dp = (double)(i + 1) / N - X[i];
        double Dm = X[i] - (double)i / N;

        if (Dp > D_plus)
            D_plus = Dp;
        if (Dm > D_minus)
            D_minus = Dm;
    }

    double D = max(D_plus, D_minus);

    cout << "D+ = " << D_plus << endl;
    cout << "D- = " << D_minus << endl;
    cout << "D  = " << D << endl;

    if (D < D_critical)
        cout << "Null hypothesis cannot be rejected.\n"
             << "Numbers are uniformly distributed on [0,1]." << endl;
    else
        cout << "Null hypothesis is rejected.\n"
             << "Numbers are not uniformly distributed." << endl;

    return 0;
}


