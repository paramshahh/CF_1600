#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, x, y, z, add = 0, sub = 0;
        cin >> n;

        x = (n / 2) - 1;
        y = n / 2;
        z = n - 1;

        for (int j = 1; j <= x; j++)
        {
            add = add + pow(2, j);
        }
        for (int j = y; j <= z; j++)
        {
            sub = sub + pow(2, j);
        }
        add = add + pow(2, n);

        cout << abs(add - sub) << endl;
    }
}