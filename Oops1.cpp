#include <iostream>

using namespace std;


class StudentDetails{

public :
    // data members 
    string name ;

    // member function
    void display(){
        cout << "Student Name  : " << name << endl; 
    }

};

int main(){

    // declare an object of class StudentDetails
    StudentDetails Std;

    // accessing data member 
    Std.name = "Rajat";

    // accessing member function 
    Std.display();

    return 0;
}