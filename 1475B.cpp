#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        if (n % 2020 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2021 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            int c = n;
            while (c % 2020 != 0 && c > 2021)
            {
                c = c - 2021;
            }
            if (c % 2020 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}