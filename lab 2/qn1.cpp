#include <iostream>
#include <iomanip>
using namespace std;

class MultiplicativeCongruential {
private:
    int X;      
    int a;
    int m;

public:
    MultiplicativeCongruential(int seed, int multiplier, int modulus) {
        X = seed;
        a = multiplier;
        m = modulus;
    }

    void generate(int n) {
        for (int i = 1; i <= n; i++) {
            X = (a * X) % m;
            double R = (double)X / m;

            cout << "X" << i << " = "
                 << setw(3) << setfill('0') << X
                 << " , R" << i << " = " << R << endl;
        }
    }
};

int main() {
    MultiplicativeCongruential mcg(117, 43, 1000);
    mcg.generate(4);  
    return 0;
}

