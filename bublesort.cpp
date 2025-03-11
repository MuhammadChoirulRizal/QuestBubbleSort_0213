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

        if (n <= 20)
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
void display()
{
    cout << endl;
    cout << "=============" << endl;
    cout << "Sorted Array" << endl;
    cout << "============" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << " Data " << i + 1 << " :" << arr[i] << endl;
    }
}
void bublesortalgoritma()
{
    // set again = 1
    int pass = 1;
    // it pass <= n-1, go to step 2.
    do
    {
        // repeat step 3 varying j from 0 to n-1 pass

        for (int j = 0; j <= n - 1 - pass; j++) // atau <=
        {
            // if the element ats index j is greater
            // j+1, swap the two ements.
            if (arr[j] > arr[j + 1])
            {
                int tmp;
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
        // increment pass by 1.
        pass = pass + 1;
    } while (pass <= n - 1); // atau pass < n
}

int main()
{
    input();
    bublesortalgoritma();
    display();
}