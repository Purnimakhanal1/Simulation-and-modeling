#include <iostream>
#include <cmath>
using namespace std;

class BinomialDistribution {
private:
    int n;       
    int k;       
    double p;    

    long long factorial(int num) {
        long long fact = 1;
        for(int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }

    long long combination(int n, int k) {
        return factorial(n) / (factorial(k) * factorial(n - k));
    }

public:
    BinomialDistribution(int trials, int successes, double probability) {
        n = trials;
        k = successes;
        p = probability;
    }

    double probability() {
        long long nCk = combination(n, k);
        return nCk * pow(p, k) * pow(1 - p, n - k);
    }

    void displayResult() {
        cout << "Number of trials (n): " << n << endl;
        cout << "Number of successes (k): " << k << endl;
        cout << "Probability of success (p): " << p << endl;
        cout << "Binomial probability P(X = k): " << probability() << endl;
    }
};

int main() {
    BinomialDistribution obj(10, 3, 0.5);
    obj.displayResult();
    return 0;
}

