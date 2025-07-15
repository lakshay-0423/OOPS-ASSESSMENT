#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    void getInput() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void add() {
        cout << "Addition: " << (num1 + num2) << endl;
    }

    void subtract() {
        cout << "Subtraction: " << (num1 - num2) << endl;
    }

    void multiply() {
        cout << "Multiplication: " << (num1 * num2) << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Division: " << (num1 / num2) << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }
};

int main() {
    Calculator calc;
    int choice;
    
    calc.getInput();

    cout << "\nSelect operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1: calc.add(); break;
        case 2: calc.subtract(); break;
        case 3: calc.multiply(); break;
        case 4: calc.divide(); break;
        default: cout << "Invalid choice!" << endl;
    }

    return 0;
}