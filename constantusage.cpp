#include <iostream>
using namespace std;

#define PI_MACRO 3.14159

class ConstantDemo {
private:
    const float pi_const;  

public:
    ConstantDemo() : pi_const(3.14159) {}

    void showConstants() {
        cout << "Using const variable: " << pi_const << endl;
        cout << "Using #define macro: " << PI_MACRO << endl;
    }

    void compareConstants() {
        cout << "\nComparison:\n";
        cout << "1. const is type-safe and scoped to class/function.\n";
        cout << "2. #define is a preprocessor directive, no type checking.\n";
        cout << "3. const can be debugged, #define is replaced before compilation.\n";
    }
};

int main() {
    ConstantDemo demo;
    demo.showConstants();
    demo.compareConstants();
    return 0;
}