#include<iostream>
namespace MyMath{
    int add(int a,int b){
        return a+b;
    }
}
int main(){
    int result=MyMath::add(3,4);
    std::cout<<result;
}