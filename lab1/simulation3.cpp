#include <iostream>
#include <cmath>
using namespace std;

class PoissonDistribution {
private:
    int n;        
    double p;     
    double lambda; 
public:
       PoissonDistribution(int trials, double probability) {
        n = trials;
        p = probability;
        lambda = n * p; 
    }

    double probabilityLessThanOne() {
        return exp(-lambda); 
    }

    void displayResult() {
        cout << "Number of items (n): " << n << endl;
        cout << "Defective probability (p): " << p << endl;
        cout << "Mean (lambda = n*p): " << lambda << endl;
        cout << "Probability of less than 1 defective item (X < 1): "
             << probabilityLessThanOne() << endl;
    }
};

int main() {
    PoissonDistribution obj(100, 0.02); 
    obj.displayResult();
    return 0;
}


