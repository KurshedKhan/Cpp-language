#include<iostream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

struct Bill{
    string name;
    int qty;
    int price;

    void input_bill(){
        cout << "Enter Item Name : " << endl;
        cin >> name;

        cout << "Enter Item Quantity : " << endl;
        cin >> qty;

        cout << "Enter Item Price : " << endl;
        cin >> price;
    }

    void header(){
        cout << setw(25) << "Generated Bill" << endl
        << setw(15) << "Item Name" 
        << setw(10) << "Qunatity" 
        << setw(10) << "Price" << endl;
    }

    void diplay_Bill(){
        cout << setw(15) << name 
        << setw(7) << qty
        << setw(10) << price << endl;
    }

};

    void seprate(){
        cout <<"_________________________________" << endl;
    }

    int main(){

        cout << "Billing Window" << endl;
        seprate();

        vector<Bill>Billing;
        char option;
        
        do{
            cout << "Do you wish to proceed [Y / N]: " << endl;
            cin >> option;

            if (option == 'n' || option == 'N'){
                break;
            }
            else{
            for (Bill st : Billing){
                st.diplay_Bill();
            }
                Bill st;
                st.input_bill();
                seprate();
                st.header();
                seprate();
                Billing.push_back(st);
            }
        }while( option =='y' || option =='Y');

        return 0;
    }