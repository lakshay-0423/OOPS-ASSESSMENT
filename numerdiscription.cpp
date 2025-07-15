#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    void getInput() {
        cout << "Enter an integer: ";
        cin >> num;
    }

    void checkEvenOdd() {
        if (num % 2 == 0)
            cout << "Even Number\n";
        else
            cout << "Odd Number\n";
    }

    void checkSign() {
        if (num > 0)
            cout << "Positive Number\n";
        else if (num < 0)
            cout << "Negative Number\n";
        else
            cout << "Zero\n";
    }

    void checkDigits() {
        int absNum = abs(num); 
        if (absNum <= 9)
            cout << "Single-digit Number\n";
        else if (absNum <= 99)
            cout << "Double-digit Number\n";
        else
            cout << "More than two digits\n";
    }

    void analyze() {
        checkEvenOdd();
        checkSign();
        checkDigits();
    }
};

int main() {
    Number n;
    n.getInput();
    n.analyze();
    return 0;
}