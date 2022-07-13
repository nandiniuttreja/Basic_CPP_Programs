#include <iostream>
using namespace std;
int main()
{
    int n, x, arr[20];
    bool flag = false;

    cout << "Enter The Size Of The Array: ";
    cin >> n;
    cout << "Enter The Array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter The Element To Be Searched: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "The Element Is Found At Index " << i << "." << endl;
        }
        else
        {
            flag = true;
        }
    }

    if (flag == true)
    {
        cout << "The Element Is Not Found In The Array.";
    }

    return 0;
}