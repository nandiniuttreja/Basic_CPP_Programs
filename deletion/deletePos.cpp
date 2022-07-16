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

        cout << "Array before deletion: ";
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void deletePos(){
        int b;
        cout << "\nEnter the index at which the element is to be deleted: ";
        cin >> b;
        arr[b] = 0;
        int temp;

        for(int i=b; i<n; i++)
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        
        cout << "Array after deletion at the beginning: ";
        for(int i=0; i<n-1; i++)
        {
            cout << arr[i] << " ";
        }

    }
};
int main(){
    ArrDo A1;
    A1.fillArr();
    A1.deletePos();
    return 0;
}