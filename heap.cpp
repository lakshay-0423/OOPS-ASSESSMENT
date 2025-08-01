#include <iostream>
using namespace std;
class Circle {
public:
    double radius;
};

int main() {
    Circle* c = new Circle;
    c->radius = 4.2;
    cout << "Radius: " << c->radius << endl;
    delete c;
    return 0;
}
    