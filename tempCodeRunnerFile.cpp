#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int ones = 0, twos = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                ones++;
            }
            if (arr[i] == 2)
            {
                twos++;
            }
        }
        if (ones % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (twos % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (twos % 2 != 0 && ones % 2 == 0 && ones != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}