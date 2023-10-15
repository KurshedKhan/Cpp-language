#include<iostream>

using namespace std;

int main(){

    float intA , intB ;

    cout << "Enter Value for First Integer : " << endl;
    cin >> intA ;

    cout << "Enter Value for Second Integer : " << endl;
    cin >> intB ;

    cout << "\n";

    float sum , subtract , multiply , divide ;

    sum = intA + intB ;
    subtract = intA - intB ;
    multiply = intA * intB ;
    divide = intA / intB ;

    cout << "Sum of integers is " << sum << " \nSubtraction of integers is " << subtract <<
    " \nmultiplication of integers is " << multiply << " \nand Quotient of integers is " << divide << endl;
    cout << "\n";

    intA++;
    intB++;

    cout << "Values of integers after increament are : " << intA << " and " << intB << endl;
    cout << "\n";
    cout << "New quotient of integers is : " << intA / intB ;

    return 0;
}