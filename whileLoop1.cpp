/*
*  sum of all the integers between 1 and n that are divisible by 13 15 and 17
*/

#include <iostream>

using namespace std;

int main(){

    int n;
    // n ==> upperbound value

    cout << "Enter an upperbound value = " << endl;
    cin >> n;
    cout << "\n";

    int number = 1;
    int sum = 0;

    while( number <= n){

        if( number % 13 == 0 || number % 15 == 0 || number % 17 == 0){

            sum = sum + number;
        }
        number++;
    }

    cout << "Sum of all the integers divisible by 13 15 and 17 between 1 and " << n << " is " << sum << endl;

    return 0;
}