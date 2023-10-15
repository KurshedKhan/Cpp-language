#include<iostream>
#include<string>

using namespace std;

class Student{

string name;
int age;
float height;

public:
    Student(string Name, int Age, float Height){
        name = Name;
        age = Age;
        height = Height;
    }

    Student(Student &st){

        name = st.name;
        age = st.age;
        height = st.height;
    }

    void output(){

        cout << "Copy Constructor : " << endl;
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "height: " << height << endl;
    }

};

int main(){

    Student ST1("Nakshatra" , 21 , 5.8); 
    ST1.output();
    cout << "_____________________________________" << endl;
    Student ST2(ST1);
    ST2.output();
    
    return 0;
}