#include<iostream>
#include<string>

using namespace std;


struct employee{

    string name;
    int age;
    string qualifiaction;
    string joinDate;

    void employee_details( string name , int age , string qualifiaction , string joinDate){

        this -> name = name;
        this -> age = age;
        this -> qualifiaction = qualifiaction;
        this -> joinDate = joinDate;
    }

    void scan(){

        cout << "===============================" << endl;
        cout << "enter name of employee : " << endl;
        cin >> name;

        cout << "enter age of employee : " << endl;
        cin >> age;

        cout << "enter qualification of employee : " << endl;
        cin >> qualifiaction;

        cout << "enter employee's joining date : " << endl;
        cin >> joinDate; 

        cout << "===============================" << endl;
        
    }

    void display(){

        cout << "name of employee is : " << name << endl;
        cout << "age of employee is : " << age << endl;
        cout << "qualification of employee is : " << qualifiaction << endl;
        cout << "joining date of employee is : " << joinDate << endl;
        cout << "===============================";

    }

};

int main(){

    employee emp;

    emp.scan();

    emp.display();

    return 0;
}