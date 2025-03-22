#include <iostream>
using namespace std;
int arr[20];
int n;
void input()
{
    while (true)
    {

        cout << " Input the Maximum Length :";

        cin >> n;

        if (n
     <= 20)
        {
            break;
        }
        else
        {
            cout << " n is bigger than 20";
        }
    }
    cout << endl;
    cout << "========================" << endl;
    cout << "enter elements of array" << endl;
    cout << "========================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data : " << i + 1 << " : ";
        cin >> arr[i];
        cout << endl;
    }
}