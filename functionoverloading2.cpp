#include<iostream>

using namespace std;

int subtract(int a , int b);

double subtract(double a , double b);

int main(){

    cout << "Difference between values is : "<< subtract(20 , 10);
    cout << "\n";

    cout << "Difference between values is : "<< subtract(20.50 , 10.25);
    return 0;
}

int subtract(int a , int b){
    return a-b;
}

double subtract(double a , double b){
    return a-b;
}