#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:

    void setDetails(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s1;

    s1.setDetails("Lakshay", 20, 88.5);

    s1.displayDetails();

    return 0;
}