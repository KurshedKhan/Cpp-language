#include <iostream>
#include <string>

using namespace std;

class Student{

    int rollnumber;

public:
    Student(int rollnumber);

    Student(Student &st){
        cout << "This is copy constructor :" << endl;

        rollnumber = st.rollnumber;

    }

    void display();
    
};

    Student::Student(int roll){
        rollnumber = roll;
    }

    void Student::display(){
        cout << "Output :" <<endl;
        cout << rollnumber << endl;
    }


int main(){

    Student st(10578) ;
    
   
    cout << "Copy Construtor is run :" << endl;
    Student st1(st);
    st1.display();
  

   
    return 0;
}



