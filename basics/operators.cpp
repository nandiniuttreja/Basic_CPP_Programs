#include<iostream>
using namespace std;
int main(){
    int x, y, a, t;
    cout << "Enter Two Numbers: ";
    cin >> x >> y;
    cout << "Main Menu" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter Your Choice: ";
    cin >> a;
    switch(a){
        case 1:
            t = x + y;
        break;
        case 2:
            t = x - y;
        break;
        case 3: 
            t = x * y;
        break;
        case 4:
            t = x / y;
        break;
        default: 
            cout << "Invalid Choice";
        break;
    }
    cout << "The Result: " << t;
    return 0;
}