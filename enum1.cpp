#include <iostream>

using namespace std;

enum Weekdays { Sun , Mon , Tue , Wed , Thu , Fri , Sat };

void CTS(Weekdays WeekValue){

        string Weekdays;

    switch (WeekValue)
    {
    case Sun:
        Weekdays = "Sunday";
        break;
    case Mon:
        Weekdays = "Monday";
        break;
    case Tue:
        Weekdays = "Tuesday";
        break;
    case Wed:
        Weekdays = "Wednesday";
        break;
    case Thu:
        Weekdays =  "Thursday";
        break;
    case Fri:
        Weekdays =  "Friday";
        break;
    case Sat:
        Weekdays =  "Saturday";
        break;
    default:
        break;
    }

    cout << "This is Weekdays :" << Weekdays << endl;
}

int main(){

    Weekdays enumvalue;
    
    int number;

    cout << "Enter a number for choose weekdays :" << endl;
    cin >> number;

    if(number >= 0 && number <= 6){
        enumvalue = (Weekdays)number;
        CTS(enumvalue);
    }
    else{
        cout << "Invalid number" << endl;
    }
    return 0;

}