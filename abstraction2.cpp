#include <iostream>

using namespace std;

class vehicle{

private:
    void piston(){
        cout << "4 piston in single car." << endl;
    }
    void manwhomade(){
        cout << "Rajat Kumawat Ji" << endl;
    }
public:
    void color(){
        cout << "Color : Black/Red/Blue" << endl;
    }
    void company(){
        cout << "Company : Mahindra Car Showroom" << endl;
    }
    void price(){
        cout << "Price : 2000000 to 3500000" << endl;
    }
    void model(){
        cout << "Model : S11 , 2021" << endl;
    }
    void oil(){
        cout << "Oil : Diesal" << endl;
    }

};

int main(){
    vehicle obj;
    obj.color();
    obj.company();
    obj.model();
    obj.oil();
    obj.price();

    return 0;
}