#include<iostream>
using namespace std;
int main(){
    int a, rem, ans=0;;
    cout << "Enter A Number: ";
    cin >> a;
    while(a >0){
        rem = a % 10;
        ans = ans * 10 + rem;
        a /= 10;
    }
    cout << "The Reversed Number: " << ans;
    return 0;
}