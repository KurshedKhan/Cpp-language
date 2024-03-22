#include <iostream>
#include <string.h>
using namespace std;

class StudentDetails {

    int rollNo;
    char name[30];
    double fee;

public:
    StudentDetails(int , char[] , double);

    StudentDetails(StudentDetails& st){
        rollNo = st.rollNo;
        strcpy(name,st.name);
        fee  = st.fee;
    }

    void display();
};

StudentDetails::StudentDetails(int rNo, char n[],double f){
    rollNo = rNo;
    strcpy(name, n);
    fee = f;

}
void StudentDetails::display(){
    
    cout << endl << rollNo  << "\t" << name  << "\t" << fee;
    cout << endl << rollNo  << "\t" << name;


}
int main(){
    StudentDetails s(1001,"Rajat",100);
    s.display();
    
    StudentDetails R(s);
    R.display();
    return 0;
}