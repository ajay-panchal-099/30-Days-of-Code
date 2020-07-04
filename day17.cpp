#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
class Calculator {
public:
    int power(int n, int p) {
        if (n < 0 || p < 0)
            throw invalid_argument("n and p should be non-negative");
        return (int) pow(n, p);
    }
};

int main()
