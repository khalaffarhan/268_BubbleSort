#include <iostream>
using namespace std;

int a[20];
int n;

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "Error: Maksimal input array adalah 20\n";
        }
    }

    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) // i++ / i = i + 1
    {
        cout << "Masukkan Nilai ke-" << (i + 1) << ": ";
        cin >> a[i];
    }
}

