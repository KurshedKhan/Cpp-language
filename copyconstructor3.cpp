#include<iostream>
#include<string>

using namespace std;

class Student{

    string name;
    int age;
    float height;
    int *p;

public:

    Student(){
        p = new int;
    }


    Student(Student &st){
        name = st.name;
        age = st.age;
        height = st.height;
        p = new int;
        *p = *(st.p);
    }

    void inputvalues(string Name, int Age, float Height, int z){
        name = Name;
        age = Age;
        height = Height;
        *p = z;
    }
    void output(){
        cout << "DEEP COPY-->" << endl;
        cout << "---------------------------" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Height : " << height << endl;
        cout << "Roll No. : " << *p << endl;
    }

};

int main(){

    Student ST1;
    ST1.inputvalues("Nakshatra" , 21, 5.8 , 102);
    ST1.output();
    cout << "---------------------------------" << endl;
    Student ST2 = ST1;
    ST2.inputvalues("Nakshatra", 21 , 5.8 , 103);
    ST2.output();

    return 0;
}