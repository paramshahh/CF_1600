#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int first = a - 1;
        if (a == 1)
        {
            cout << 1 << endl;
        }
        int second = abs(abs(c - b) + abs(c - 1));
        // cout << first << " " << second << endl;
        if (first > second)
        {
            cout << 2 << endl;
        }
        else if (first < second && a != 1)
        {
            cout << 1 << endl;
        }
        else if (first == second)
        {
            cout << 3 << endl;
        }
    }
}