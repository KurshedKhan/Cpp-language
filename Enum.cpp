#include <iostream>

using namespace std;

enum Student {Nakshatra=101,Neha, pooja, Rahul=120,Sonu,Monu};
enum Bloodgroup { A_Positive,B_Nagative ,A_Nagative,B_Positive,AB_Positive,AB_Nagative,O_Positive,O_Nagative};



int main(){

    enum Student st;
    st = Nakshatra;

    cout << "====================================" << endl;

    cout << "Student Detals of Position" << endl;

    cout << "Position of Nakshatra : " << st << endl;

    st = Rahul;

    cout << "Position of Rahul :" << st << endl;


     st = Sonu;

    cout << "Position of Sonu :" << st << endl;


    cout << "====================================" << endl;


    int i;

    for(i = A_Positive ; i <= O_Nagative ; i++){

        cout << "Bloodgroup Position :" <<i << " " << endl;

    }
    cout << "====================================" << endl;

    return 0;
}