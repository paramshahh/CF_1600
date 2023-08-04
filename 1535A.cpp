#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int arr[4], maxp[2];
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[j];
        }

        maxp[0] = max(arr[1], arr[0]);
        maxp[1] = max(arr[2], arr[3]);

        sort(arr, arr + 4);
        sort(maxp, maxp + 2);

        if ((maxp[0] == arr[2]) && (maxp[1] == arr[3]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}