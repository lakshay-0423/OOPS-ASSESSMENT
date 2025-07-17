#include <iostream>
using namespace std;

class InitializationDemo {
private:
    int copyInit;
    int directInit;
    int uniformInit;
    int defaultInit;

public:
    InitializationDemo() {
        copyInit = 10;         
        directInit = int(20);  
        uniformInit = {30};    
    }

    void showValues() {
        cout << "Copy Initialization: " << copyInit << endl;
        cout << "Direct Initialization: " << directInit << endl;
        cout << "Uniform Initialization: " << uniformInit << endl;
        cout << "Default Initialization (may be garbage): " << defaultInit << endl;
    }
};

int main() {
    InitializationDemo demo;
    demo.showValues();
    return 0;
}