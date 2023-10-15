#include <iostream>
#include <string>

using namespace std;

class Person{

private:
    string name;
    int  age;
    float height;
    string bloodgroup;


public:

    Person(){};

    Person(string Name,int Age,float Height,string Bloodgroup){

        this->name = Name;
        this->age = Age;
        this->height = Height;
        this->bloodgroup = Bloodgroup;
    }

    string getName(){
        return this->name;
    }

    int getAge(){
        return this->age;
    }

    float getHeight(){
        return this->height;
    }

    string getBloodgroup(){
        return this->bloodgroup;
    }

      void display_data(){
        
        cout << "\n================================\n" << endl;

        cout << "Person data :\n" << endl;
        
        cout << "Name :" << this->getName() << endl;
        cout << "Age :" << this->getAge()<< endl;
        cout << "Height :" << this->getHeight() << endl;
        cout << "Bloodgroup :" << this->getBloodgroup() << endl;


    }

};


class Student:public Person{

private:
    int rollnumber;
    string section;
    int number;

public :
    Student(){};

    Student(string name,int age,float height,string bloodgroup,int rollnumber,string section,int number):Person(name,age,height,bloodgroup){
        
        this->rollnumber = rollnumber;
        this->section = section;
        this->number = number;
    }

    void Showdata(){
        cout << "\n================================\n" << endl;
        cout << "Student Class data :\n" << endl;

        cout << "Roll Number :" << this->rollnumber << endl;
        cout << "Section :" << this->section << endl;
        cout << "Number :" << this->number << endl;

        cout << "\n================================\n" << endl;

        cout << "Person data :\n" << endl;
        
        cout << "Name :" << this->getName() << endl;
        cout << "Age :" << this->getAge()<< endl;
        cout << "Height :" << this->getHeight() << endl;
        cout << "Bloodgroup :" << this->getBloodgroup() << endl;


    }

};


int main(){

    int option;
    cout << "To access data choose an option : \n1. Detailed info 2.Short Info [ 1 / 2 ]" << endl;
    cin >> option;
    
    Student st("Nakshatra",21,5.8,"O+",10456,"BCA",98);
    Person pt("Nakshatra",21,5.8,"O+");

    if( option == 1){
        st.Showdata();
    }
    else if( option == 2 ){
        pt.display_data();
    }
    else{
        cout << "invalid input" << endl;
    }
    return 0;
}
