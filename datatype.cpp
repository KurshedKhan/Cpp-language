#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int number = 10;
    char ch = 'c';
    
    cout << "character Variable " << ch << endl;
    cout << "Character Minimum Value" << CHAR_MIN << endl;
    cout << "Character Maximum Value" << CHAR_MAX << endl;
    cout << "Character bit value" << CHAR_BIT << endl;
    cout << "Charcter size :" << sizeof(ch) << endl;

    cout << "Integer bit value "<< sizeof(number) << endl;
    cout << "Integer Minimum value" << INT_MIN << endl;
    cout << "Integer Maximum value" << INT_MAX << endl;
    
    return 0;
}