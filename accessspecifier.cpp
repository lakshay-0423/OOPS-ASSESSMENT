// #include<iostream>
// using namespace std;

// class Base{
//     public:
//     int pub=1;
//     protected:
//     int prot=2;
//     private:
//     int priv=3; 
// };

// class Derived: public Base{
//     public:
//     void display(){
//         cout << "Public: " << pub << endl; // Accessible
//         cout << "Protected: " << prot << endl; // Accessible
//         // cout << "Private: " << priv << endl; // error:private
//     }
// };

// int main(){
//     Base b;
//     cout << b.pub << endl;
//     //cout<<b.prot << endl; // error
//     //cout<<b.priv << endl; // error

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class demo{
//     public:
//     static int counter;
//     demo(){
//         counter++;
//     }
// };

// int demo::counter = 0;
// int main(){
//     demo a,b,c;
//     cout << "Total objects created: " << demo::counter << endl; 
// }

// #include<iostream>
// using namespace std;
// class Math{
//     public:
//     static int square(int x){
//         return x * x;
//     }
// };
// int main(){
//     cout<< "Square of 5: " << Math::square(5) << endl;
// }

// #include<iostream>
// using namespace std;
// class car{
//     public:
//     static int totalcars;
//     car(){
//         totalcars++;
//     }
// };
// int car::totalcars=0;
// int main(){
//     car c1,c2;
//     cout<<car::totalcars<<endl;
// }
// #include<iostream>
// using namespace std;
// class Example{
//     private:
//     const int value;
//     int& ref;

//     public:
//     Example(int v,int& r):value(v),ref(r){
//         std::cout<<"const value: "<<value<<"|Reference value: "<<ref<<"\n";
//     }
// };

// int main(){
//     int num = 10;
//     Example ex(5, num);
// }

// #include <iostream>
// using namespace std;
// class Father{
//     public:
//     void discipline() { cout<< "Father's discipline\n"; }
// };

// class Mother{
//     public: 
//     void care(){cout<<"Mother's care\n";}
// };

// class child: public Father,public Mother{
//     public:
//     void learn(){cout<<"child learning from parents\n";}
// };

// int main(){
//     child c;
//     c.discipline();
//     c.care();
//     c.learn();
// }



#include<iostream>
using namespace std;

class Rectangle {
    private:
        int width;
        int height;

    public:
        Rectangle() : width(1), height(1) {}

        ~Rectangle() {
            cout << "Rectangle destroyed\n";
        }
};

int main() {
    Rectangle rect;
    return 0;
}