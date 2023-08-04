#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 1 || n == 2)
        {
            cout << 1 << endl;
        }
        else if (n % 2 != 0)
        {
            int x = (n / 2) + 1;
            cout << x << endl;
        }
        else
        {
            int y = (n / 2);
            cout << y << endl;
        }
    }
}