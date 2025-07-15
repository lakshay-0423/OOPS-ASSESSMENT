#include <iostream>
using namespace std;

class Student {
private:
    int marks[5];
    int total;
    float average;
    char grade;

public:
    void getMarks() {
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculate() {
        total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        average = total / 5.0;

        if (average >= 90) grade = 'A';
        else if (average >= 80) grade = 'B';
        else if (average >= 70) grade = 'C';
        else if (average >= 60) grade = 'D';
        else grade = 'F';
    }

    void display() {
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage Marks: " << average;
        cout << "\nGrade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.getMarks();
    s.calculate();
    s.display();
    return 0;
}