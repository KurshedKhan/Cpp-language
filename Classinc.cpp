#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


class Student {

private:
    string name;
    int age;
    float height;
    string bloodgroup;

public:
    Student(){
        cout << "default construtor : " << endl; 
        this->name = "";
        this->age = 0;
        this->height = 0;
        this->bloodgroup = "";
    }

    Student(string name, int age , float height , string bloodgroup){

        cout << "parametered constructor :" << endl;
        this->name = name;
        this->age = age;
        this->height = height;
        this->bloodgroup = bloodgroup;
    }

    void set_info(string name = "", int age = 0 , float height = 0 , string bloodgroup = "" ){
        if(name != "")this->name = name;
        if(age != 0)this->age = age;
        if(height != 0)this->height = height;
        if(bloodgroup != "")this->bloodgroup = bloodgroup;
    }

    void display_info(){
        cout << "Name :" << this->name << endl
            << "Age :" << this->age << endl
            << "Height :" << this->height << endl
            << "Bloodgroup " << this->bloodgroup << endl;
    }
};

int main(){

    Student st;

    st.set_info("Nakshatra",21,5.8,"B+");
    st.display_info();
    return 0;
}