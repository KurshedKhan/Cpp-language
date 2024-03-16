#include <iostream>

using namespace std;

class EmployeeDetails{

public :
    // declare data memeber
    int id;
    string name;
    int age; 
    string post;
    int salary;

    //declare member function 
    void displayDetails();

};

void EmployeeDetails::displayDetails(){
    cout << "==========================" << endl;
    cout << "Employee Details :" << endl;
    cout << "Id : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Post : " << post << endl;
    cout << "Salary : " << salary << endl;
    cout << "==========================" << endl;

}

int main(){

    EmployeeDetails emp1;
    emp1.id = 421;
    emp1.name = "Rajat Kumawat";
    emp1.age = 25;
    emp1.post = "Senior HR";
    emp1.salary = 50000;

    emp1.displayDetails();
  
    return 0;
}