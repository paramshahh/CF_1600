// Regular and fancy coins of the same type are worth the same.

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;
        if (a1 >= m || ak * k >= m)
        {
            cout << 0 << endl;
        }
        else
        {
            int totrem = m - a1 - (ak * k);
            if (totrem % k == 0)
            {
                cout << totrem / k << endl;
                ;
            }
            // else
            // {
            //     int a11 = totrem / k;
            //     totrem = totrem - a11;
            //     cout << totrem << endl;
            //     cout << a11 + totrem / k << endl;
            // }
            else
            {
                while (totrem % k != 0)
                {
                    totrem--;
                }
                cout << totrem / k << endl;
            }
        }
    }
}