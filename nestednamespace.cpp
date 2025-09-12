// #include<iostream>
// namespace outer{
//     namespace inner{
//         int x=42;
//     }
// }
// int main(){
//     int y=outer::inner::x;
//     std::cout<<y;
// }

// #include<iostream>
// namespace hello{
//     void greet(){
//     std::cout<<"hi\n";
//     }
// }
// int main(){
//     hello::greet();
//     return 0;
// }

// #include<iostream>
// namespace Physics{
//     double gravity(){
//         return 9.8;
//     }
// }
// int main(){
//     std::cout << "Gravity: " <<Physics::gravity()<<std::endl;
//     return 0;
// }

// #include<iostream>
// namespace A{
//     int val(){return 2;}
// }
// namespace B{
//     int val(){return 5;}
// }

// int main(){
//     std::cout << A::val() + B::val()<<std::endl;
//     return 0;
// }

#include<iostream>
namespace lib1{
    void calculate(){
        std::cout << "Calculating in lib1" << std::endl;
    }
}
namespace lib2{
    void calculate(){
        std::cout << "Calculating in lib2" << std::endl;
    }
}   
int main(){
    lib1::calculate();
    lib2::calculate();
    return 0;
}