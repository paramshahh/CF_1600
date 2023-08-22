#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = n % 4;

    if (n == 0)
    {
        cout << 1;
    }
    else if (x == 0)
    {
        cout << 6;
    }
    else if (x == 1)
    {
        cout << 8;
    }
    else if (x == 2)
    {
        cout << 4;
    }
    else
    {
        cout << 2;
    }
}