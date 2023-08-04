#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, c, n, numtobesub = 0;
        cin >> a >> b >> c >> n;

        int y = max(a, b);
        int maxx = max(y, c);

        if (c == maxx)
        {
            numtobesub = (c - a) + (c - b);
        }
        else if (b == maxx)
        {
            numtobesub = (b - a) + (b - c);
        }
        else
        {
            numtobesub = (a - b) + (a - c);
        }
        int divbyt = n - numtobesub;

        if (n < numtobesub)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (divbyt % 3 == 0)
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