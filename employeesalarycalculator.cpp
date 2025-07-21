#include <iostream>
using namespace std;   
int main(){
    int employee_id;    
    string employee_name;
    double basic_salary;
    int exp;
    cout<<"enter employee id: ";
    cin>>employee_id;
    cout<<"enter employee name: ";
    cin.ignore();
    getline(cin,employee_name);
    cout<<"enter employee salary: ";
    cin>>basic_salary;
    cout<<"enter employee years of experience: ";
    cin>>exp;
    float bonus;
    if (exp<2) bonus=0.05*basic_salary;
    else if (exp<5) bonus=0.1*basic_salary;
    else if (exp>=5) bonus=0.15*basic_salary;
    int total_salary=basic_salary+bonus;
    cout<<"total_salary = "<<total_salary;
    return 0;
}