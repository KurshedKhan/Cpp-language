#include<iostream>

using namespace std;

enum Bloodgroup {A_P , A_N , o_P , O_N , AB_P , AB_N};

//CTS => Convert to String

void CTS(Bloodgroup bg){

    string Blood;

    switch(bg){
    
    case A_P:
    Blood = "A_positive";
    break;

    case A_N:
    Blood = "A_negative";
    break;

     case o_P:
    Blood = "O_positive";
    break;

     case O_N:
    Blood = "O_negative";
    break;

     case AB_P:
    Blood = "AB_positive";
    break;

     case AB_N:
    Blood = "AB_negative";
    break;

    default:
    break;
    }

    cout << "The Bloodgroup on given number is : " << Blood << endl;
}

int main(){

    Bloodgroup bg_value;

    int number;

    cout << "Enter number to check bloodgroup: " << endl;
    cin >> number;

    if( number >=0 && number <=5 ){

        bg_value = (Bloodgroup)number;

        CTS(bg_value);
    }

    return 0;
}