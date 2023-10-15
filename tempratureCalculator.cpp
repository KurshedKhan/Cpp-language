/*
*convert celsius to fahrenheit and fahrenheit to celsius using double
*/

#include<iostream>

using namespace std;

int main(){

    double celsius;

    cout << "Enter temprature in celsius = " << endl;
    cin >> celsius ;
    cout << "\n" ;

    double resultA = (celsius * 1.8) + 32;

    cout << "It will be " << resultA << " fahrenheit" << endl;
    cout << "\n" ;

    double fahrenheit;

    cout << "Enter temprature in fahrenheit = " << endl;
    cin >> fahrenheit ;
    cout << "\n" ;

    double resultB = (fahrenheit - 32) * 5/9;

    cout << "It will be " << resultB << " celsius" << endl;

return 0;    

}