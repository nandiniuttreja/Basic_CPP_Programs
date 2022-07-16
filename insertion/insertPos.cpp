#include<iostream>
using namespace std;
class ArrDo{
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
    void insertPos(){
        int pos, b;
        cout << "\nEnter the index at which the element is to be inserted: ";
        cin >> pos;
        cout << "Enter the element to be inserted at that index: ";
        cin >> b;
        int temp;

        for(int i=pos; i<n+1; i++)
        {
            temp = arr[i];
            arr[i] = b;
            b = temp;
        }

        cout << "Array after insertion: ";
        for(int i=0; i<n+1; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main(){
    ArrDo A1;
    A1.fillArr();
    A1.insertPos();
    return 0;
}