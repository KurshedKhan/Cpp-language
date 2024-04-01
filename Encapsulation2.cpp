#include <iostream>

using namespace std;

class circle {

private :
    float radius;
    float Area;
    const float PI = 3.14;

public :
    void getRadius(){
        cout << "Enter your circle radius : " << endl;
        cin >> radius;
    }
    void FindArea(){
        Area =  PI * radius * radius;
        cout << "Your area is : " << Area << endl;
    }
};

int main(){

    circle cir;
    cir.getRadius();
    cir.FindArea();

    return 0;
}
