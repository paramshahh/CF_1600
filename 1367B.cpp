#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int evenm = 0;
        int oddm = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 != a[i] % 2)
            {
                if (i % 2 == 0)
                {
                    evenm++;
                }
                else
                {
                    oddm++;
                }
            }
        }

        if (evenm == oddm)
        {
            cout << evenm << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
