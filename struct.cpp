#include<iostream>
using namespace std;
struct book{
    int pages;
    double price;
};
int main(){
    book harrypotter;
    harrypotter.pages=100;
    harrypotter.price=300;

    cout<<"pages: "<<harrypotter.pages<<endl<<"price: "<<harrypotter.price;
}