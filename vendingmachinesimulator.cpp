#include <iostream>
using namespace std;

int main() {
    string items[] = {"Soda", "Chips", "Candy", "Juice", "Water"};
    double prices[] = {1.50, 1.00, 0.75, 2.00, 1.25};
    int choice;
    double inserted;

    for (int i=0;i<5;i++){
        cout<<i+1<<". "<<items[i]<<" :$"<<prices[i]<<endl;
    }
    int x=1;
    int choice;
    while (x){
        cout<<"write item no. :";
        cin>>choice;
        cout<<"";
    }
    return 0;
}