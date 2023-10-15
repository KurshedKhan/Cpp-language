#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

struct Tableformate
{
    string name;
    int age;
    float height;
    string bloodgroup;

    void scan()
    {
        cout << "Student Name :" << endl;
        cin >> name;

        cout << "Student age :" << endl;
        cin >> age;

        cout << "Student height :" << endl;
        cin >> height;

        cout << "Student bloodgroup :" << endl;
        cin >> bloodgroup;
    }

    void Display()
    {

        cout << setw(15) << name
             << setw(10) << age
             << setw(10) << height
             << setw(15) << bloodgroup << endl;
    }
};
void ShowHeader()
{

    cout << setw(15) << "Name "
         << setw(10) << "Age"
         << setw(10) << "Height"
         << setw(15) << "Bloodgroup" << endl;
}

void sep()
{
    cout << "==================================================================" << endl;
}
int main()
{
    vector<Tableformate> tableformate;

    while (1)
    {
        sep();
        ShowHeader();
        sep();
        for (Tableformate TF : tableformate)
        {
            TF.Display();
        }
        sep();
        char cmd = '\0';
        cout << "Staring Symbol [y/n]" << endl;
        cin >> cmd;

        sep();
        if (cmd == 'n' || cmd == 'N')
        {
            break;
        }

        if (cmd == 'y' || cmd == 'Y')
        {
            Tableformate TF;
            TF.scan();
            tableformate.push_back(TF);
        }
    }
    system("cls");

    return 0;
}