#include <iostream>

using namespace std;

class abstraction1
{
private:
    int a, b;
public:
    void setvalue(int x , int y){
        a  = x;
        b = y;
    }
    void display(){
        cout << "Value of first : " << a << endl;
        cout << "Value of second :" << b << endl;
    }
};

int main(){

    abstraction1 obj;
    obj.setvalue(25,75);
    obj.display();

    return 0;
}




