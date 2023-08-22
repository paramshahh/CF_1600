#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int operations = 0;
        int currentMax = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            operations += max(0, currentMax - a[i]);
            currentMax = max(a[i], currentMax - 1);
        }

        cout << operations << endl;
    }

    return 0;
}
