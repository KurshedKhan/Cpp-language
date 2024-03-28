#include <iostream>

using namespace std;

class temp{

    int a ;
    int b ;

public:

    int solve(int input){
        a = input;
        b = a/2;
        return b;
    }


};

int main(){

    temp obj1;
    int n,ans;
    cout << "Enter your number for half : " << endl;
    cin >> n;
    ans = obj1.solve(n);
    cout << "Answer your value : " << ans << endl;
    return 0;
}