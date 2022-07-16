#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter A Number: ";
    cin >> a;
    int i;
    int x = a;
    for(i=a-1; i>=1; i--){
        a = a * i;
    }
    cout << "Factorial Of " << x << ": " << a;
    return 0;
}