#include <iostream>
using namespace std;
struct date {
    int day;
    int month;
    int year;
};

int main() {
    date* d = new date;
    d->day = 15;
    d->month = 8;
    d->year = 1947;
    cout << "Date: " << d->day << "-" << d->month << "-" << d->year << endl;
    delete d;
    return 0;
}
