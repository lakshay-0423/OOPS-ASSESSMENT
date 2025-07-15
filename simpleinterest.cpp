#include <iostream>
using namespace std;

class SimpleInterest {
private:
    float principal, rate, time;

public:
    void getInput() {
        cout << "Enter Principal Amount: ";
        cin >> principal;
        cout << "Enter Rate of Interest (%): ";
        cin >> rate;
        cout << "Enter Time (years): ";
        cin >> time;
    }

    float calculateSI() {
        return (principal * rate * time) / 100;
    }

    void displaySI() {
        float si = calculateSI();
        cout << "\nSimple Interest = " << si << endl;
    }
};

int main() {
    SimpleInterest siCalc;
    siCalc.getInput();
    siCalc.displaySI();
    return 0;
}