#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter Two Numbers: ";
    cin >> a >> b;
    cout << "Numbers Before Swapping: " << a << " " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Numbers After Swapping: " << a << " " << b;
    return 0;
}