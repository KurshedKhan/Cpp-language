#include <iostream>


using namespace std;


void squre(int& x);

void sqr(int x);

int main(){

    int var1 = 10;

    int var2 = 20;

    int *ptr = NULL;


    ptr = &var1;

    squre(var1);

    sqr(var2);

    

    return 0;
}
    // access the  reference of the  variable.
void squre(int& x){

    x = x*x;

    cout << "inside the function (pointer) :" << x << endl;

}
// access the value of the variable
void  sqr(int x){

    x = x*x;

    cout << "inside the function " << x << endl;
}