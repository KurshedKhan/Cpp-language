#include <iostream>
using namespace std;

int main(){

    // std:: ==> resolution operator

    cout << "Hello World..!" << endl<< "Good Morning , Hye" << "\n";
    cout << "\t Hello World" << endl;

    cout << "  *" << "\n * *" << "\n*   *" << "\n * *" << "\n  *" ;
    cout << "\n\n\n";
    

    // Arthemetic Operations

    int firstnumber,secondnumber;

    cout << "Enter first number " << endl;
    cin >> firstnumber;

    cout << "Enter second number " << endl;
    cin >> secondnumber;


    int sum , subtract, multiple , division;

    sum = firstnumber + secondnumber;
    subtract = firstnumber - secondnumber;
    multiple = firstnumber * secondnumber;
    division = firstnumber / secondnumber;

    cout << "sum of two number : " << sum << endl;

    cout << "subtract of two number : " << subtract << endl;

    cout << "multiple of two number : " << multiple << endl;

    cout << "division of two number : " << division << endl;

    return 0;
}