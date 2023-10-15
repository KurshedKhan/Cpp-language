#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class MMA{

private:
    string Name;
    int Age;
    int Yoe; // yoe-> years of experience
    string Record;
    string Speciality;

public:
    MMA(){

        cout << "Default constructor"<< endl;
        this->Name ="Conor Mcgregor";
        this->Age = 30;
        this->Yoe = 0;
        this->Record ="[Private]";
        this->Speciality="[Private]";
    };
    
    void personal_info( string name=" " , int age=0 , int yoe=0 , string record="" , string speciality=""){}

    void display(){
       cout << "Name : " << this->Name << endl;
       cout<< "Age : " << this->Age << endl; 
       cout << "Years Of Experience : " << this->Yoe << endl;
       cout << "Record : "<< this->Record << endl;
       cout << "Speciality : "<< this->Speciality<< endl;
    }

};


int main(){

    MMA ufc;
    int option;
    cout << "Choose your position :  1.User \t 2.Owner" << endl;
    cin >> option;

    if (option = 1){
        ufc.display();
    }
    else if(option = 2){
        ufc.personal_info("Conor Mcgregor" , 30, 16 , "18-2", "Striker");
        //ufc.display();
    }
    else{
        cout << "invalid input" << endl;
    }

    return 0;
}