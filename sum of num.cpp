#include <iostream>
using namespace std;

class calculation {
public:
    void calculate() {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        cout << "Sum: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        cout << "Division: " << a / b << endl; 
    }
};

int main() {
    calculation c1;
    c1.calculate();
    return 0;
}
