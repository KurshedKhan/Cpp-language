#include <iostream>
#include <string>

using namespace std;

/* <data-type> function_name(parameter_list){

    // ==> statement 
}

*/

void greeting( string msg ,  string to="user" );

int add(int a , int b);

float add(float a , float b);

double add(double a , double b);


int main(){

    greeting("I am fine and you...", "Nakshatra singh");

    cout << endl;

    cout << "int add() : " << add(23, 34);

      cout << endl;  cout << endl;

    cout << "float add() : " << add((float)23.56,(float) 34.76);

    cout << endl;  cout << endl;

    cout << "double add() : " << add(26.56, 38.76);



    return 0;
}

void greeting( string msg , string to){

    cout << "Hello Dear : \n" << "\ti am " << to 
    << " \n\t\thow are you , next plan....\n\n "<< "Answer :" << msg << endl;
}

int add(int a , int b ){

     cout  << "a and b value of addition " << endl;

     return a + b ;
}

float add(float a , float b ){

     cout  << "a and b value of addition " << endl;

     return a + b ;
}

double add(double a , double b ){

     cout  << "a and b value of addition " << endl;

     return a + b ;
}