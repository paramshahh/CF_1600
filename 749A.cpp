#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        int x = n / 2;
        cout << x << endl;
        for (int i = 0; i < x; i++)
        {
            cout << 2 << ' ';
        }
    }
    else
    {
        int x = (n - 3) / 2;
        cout << x + 1 << endl;
        for (int i = 0; i < x; i++)
        {
            cout << 2 << ' ';
        }
        cout << 3 << endl;
    }
}