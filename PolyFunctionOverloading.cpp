#include <iostream>

using namespace std;

class DiffSum {
public :
    int sum(int x , int y){
        int total = x + y ;
        return total ;
    }
    // int sum(int x , int y , int z){
    //     int total = x + y + z ;
    //     return total;
    // }
    
    float sum(float x , float y , float z){
        float total = x + y + z ;
        return total;
    }
   
};

int main(){

    DiffSum sum1;
    // int store = sum1.sum(10,20);
    // cout << "Total of value : " << store << endl;

    cout << " Function overloading with Polymorphism concept in oops : " << endl;
    float n1,n2,n3;

    cout << " Enter your first number1 : " << endl;
    cin >> n1;

    cout << " Enter your Second number2 : " << endl;
    cin >> n2;

    cout << " Enter your Third number3 : " << endl;
    cin >> n3;


    float store =  sum1.sum(n1,n2,n3);
    cout << "Total of value : " << store << endl;

    return 0;
}