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

    // // default Contructor 
    // EmployeeDetails(){
    //     cout << "Default Constructor called" << endl; 
    //     id = 421;
    //     name = "Rajat Kumawat";
    //     age = 25;
    //     post = "Senior HR";
    //     salary = 50000;

    // }
    // parameterized constructor 
    EmployeeDetails(int Id , string Name , int Age , string Post, int Salary){
        cout << "Default Constructor called" << endl; 
        id = Id;
        name = Name;
        age = Age;
        post = Post;
        salary = Salary;

    }

};

int main(){
    //create a object using classname
    EmployeeDetails emp1(214,"Rajat Kumawat" ,25,"Manager",1000000);
    EmployeeDetails emp2(215,"Kurshed Khan" ,22,"Teacher",1000);

    cout << "==========================" << endl;
    cout << "Employee Details :" << endl;
    cout << "Id : " << emp1.id << endl;
    cout << "Name : " << emp1.name << endl;
    cout << "Age : " << emp1.age << endl;
    cout << "Post : " << emp1.post << endl;
    cout << "Salary : " << emp1.salary << endl;
    cout << "==========================" << endl;

    cout << "==========================" << endl;
    cout << "Employee Details :" << endl;
    cout << "Id : " << emp2.id << endl;
    cout << "Name : " << emp2.name << endl;
    cout << "Age : " << emp2.age << endl;
    cout << "Post : " << emp2.post << endl;
    cout << "Salary : " << emp2.salary << endl;
    cout << "==========================" << endl;
    return 0;
}