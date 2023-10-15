#include <iostream>
#include <string>


using namespace std;

enum class Bloodgroup { A_Positive,B_Nagative ,A_Nagative,B_Positive,AB_Positive,AB_Nagative,O_Positive,O_Nagative};

const char* bg[] ={"A_Positive","B_Nagative" ,"A_Nagative","B_Positive","AB_Positive","AB_Nagative","O_Positive","O_Nagative"};
struct Student {

    string name;
    int age;
    float height;
    // Bloodgroup bloodgroup;

    //,Bloodgroup bloodgroup
    void Student_Details(string name,int age,float height) {

        this->name = name;
        this->age = age;
        this->height = height;
        //this->bloodgroup = bloodgroup;
    }

    void scan(){
        cout << "Name of Student :" << endl;
        cin >> name;

        cout << "Age of Student :" << endl;
        cin >> age;

        cout << "Height of Student :" << endl;
        cin >> height;

        // cout << "Bloodgroup of Student :" << endl;
        // cin >> Bloodgroup::A_Positive;
    }

    void Display(){
        cout << "Name of Student :" << name << endl;
        cout << "Age of Student :" << age << endl;
        cout << "Height of Student :" << height << endl;
        cout << "bloodgroup of Student :" << endl;
    }
};

int main(){

    Student st;


    //st.scan();
    cout << "=============================="<< endl;
    //st.Student_Details("Nakshatra singh",21,5.8,Bloodgroup::A_Positive);  //,"o+"
    st.Display();
    cout << "=============================="<< endl;


    return 0;
}