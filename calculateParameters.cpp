#include<iostream>

using namespace std;

int main(){

    float radius;

    cout << "Enter Radius To Calculate Parameters: " << endl;
    cin >> radius;

    float area , circumference , volume;
    float pi =  3.14159265;

    area = radius * radius * pi;
    circumference = 2 * pi * radius;
    volume = ((4) * (pi) * (radius * radius * radius))/3;

    cout << "Area of Circle is : " << area << endl;

    cout << "Circumference of Circle is : " << circumference << endl;

    cout << "Volume of Sphere is : " << volume << endl;

    return 0;
}