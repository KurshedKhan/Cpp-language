#include <iostream>
#include <string>

using namespace std;


/* 
    ostream& operator<<(ostream& first,  obj& second){};
*/

struct Student {
    string name;
    int age;
    double height;
    string bg;
};

ostream&  operator<<(ostream& COUT , Student& st){

    COUT << "Student {" 
        << "Name :" << st.name 
        << " Age : " << st.age 
        << " height :" << st.height 
        << " Bloodgroup :" << st.bg 
        << "}"<< endl;

    return COUT;
 }

istream& operator>>(istream& CIN , Student& st){

    cout << "Name\t\tAge\tHeight\tBloodgroup" << endl;

    CIN >> st.name >> st.age >> st.height >> st.bg ;

    return CIN;
}

int main(){

    Student st;

    cin >> st;

    cout << "--------------------------------------------------" << endl;
    
    cout << st;

    return 0;
}