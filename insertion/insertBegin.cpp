#include<iostream>
using namespace std;
class ArrDo {
    public:
    int arr[50];
    int n;
    void fillArr(){
        cout << "Enter the size of the array: ";
        cin >> n;

        cout << "Enter the elements of the array: ";
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        cout << "Array before insertion: ";
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void insertBegin(){
        int b;
        cout << "\nEnter the element to be inserted at the beginning: ";
        cin >> b;
        int temp;

        for(int i=0; i<n+1; i++)
        {
            temp = arr[i];
            arr[i] = b;
            b = temp;
        }

        cout << "Array after insertion: " << endl;
        for(int i=0; i<n+1; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main(){
    ArrDo A1;
    A1.fillArr();
    A1.insertBegin();
    return 0;
}