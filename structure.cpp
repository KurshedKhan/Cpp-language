#include <iostream>
#include <string>

using namespace std;

struct Student {

    string name ;
    int age;
    double height;
    string bloodgroup;


};

Student GetDetails(Student st);

Student Display(Student st);

int main() {

    Student st;

    st = GetDetails(st);

    Display(st);

    return 0;
}

Student GetDetails(Student st){

    cout << "Student Name : " << endl;
    // cin>> st.name;
     getline(cin,st.name);
     cin.ignore();

    cout << "Student Age :" << endl;
    cin >> st.age;

    cout << "Student Height : " << endl;
    cin >> st.height;

    cout << "Student Bloodgroup : " << endl;
    cin >> st.bloodgroup;

    return st;

}

Student Display(Student st){

    cout << "Student Name :" << st.name << endl;
    cout << "Student Age :" << st.age << endl;
    cout << "Student Height :" << st.height << endl;
    cout << "Student Bloodgroup :" << st.bloodgroup << endl;

    return st;
}