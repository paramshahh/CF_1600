#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int mul2 = 0, mul1 = 0;
    if (n % 2 == 0)
    {
        mul2 = n / 2;
        mul1 = n;
    }
    else
    {
        mul2 = (n + 1) / 2;
        mul1 = n;
    }

    if (n < m)
    {
        cout << -1;
    }
    else
    {
        while (mul2 % m != 0)
        {
            mul2++;
        }
        cout << mul2;
    }
}