//Take a password string as input
//Uses while loop to analyze each character
//Counts uppercase ,lowercase, digits, and special characters
//Uses nested if statements to determine password strength
#include <iostream>
#include <string>
using namespace std;
int main() {
    string password;
    int uppercase=0,lowercase=0,digits=0,specialcharacter=0,category=0;
    cout<< "enter a password: ";
    getline(cin,password);
    cout<<password;
    for (char ch:password){
        if (isupper(ch)) uppercase++;
        else if (islower(ch)) lowercase++;
        else if (isdigit(ch)) digits++;
        else specialcharacter++;
    }
    if (uppercase>0) category++;
    if (lowercase>0) category++;
    if (digits>0) category++;
    if (specialcharacter>0) category++;
    if ((password.length()<6) || category<2) cout<< "weak";
    else if ((password.length()<8) || category>=2) cout<< "medium";
    else cout<<"strong";
    return 0;
}