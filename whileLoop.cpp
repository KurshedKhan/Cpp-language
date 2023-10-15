/* 
*  seprate sum of odd and even numbers to an upperbound
*/


#include<iostream>

using namespace std;

int main(){

    int ub;
    //ub ==> upperbound
    
    cout << "Enter the upperbound value : " << endl;
    cin >> ub;

    int Odd = 0;
    int eve = 0;
    int number = 1;

    while( number <= ub ){

        if( number % 2 == 0){

            eve = eve + number;
        }
        else{
            Odd = Odd + number;
        }

        number++;
    }

    cout << "sum of even numbers is = " << eve << endl;
    cout << "\n" ;
    cout << "sum of odd numbers is = " << Odd << endl;


    return 0;
}