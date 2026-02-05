#include <iostream>
#include <algorithm>
using namespace std;

class KSTest {
private:
    double X[10];
    int N;
    double D_critical;

public:
    KSTest(double data[], int n, double Dc) {
        N = n;
        D_critical = Dc;
        for (int i = 0; i < N; i++)
            X[i] = data[i];
    }

    void testIndependence() {
        double D_plus = 0.0, D_minus = 0.0;

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
                 << "The random numbers are independent." << endl;
        else
            cout << "Null hypothesis is rejected.\n"
                 << "The random numbers are not independent." << endl;
    }
};

int main() {
    double data[10] = {0.35, 0.77, 0.12, 0.33, 0.88,
                       0.45, 0.19, 0.25, 0.91, 0.54};

    KSTest ks(data, 10, 0.41);
    ks.testIndependence();

    return 0;
}

