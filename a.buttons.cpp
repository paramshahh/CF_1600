#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, first = 0, second = 0;
        cin >> a >> b >> c;
        if (c % 2 != 0)
        {
            if (b > a)
            {
                cout << "Second" << endl;
            }
            else
            {
                cout << "First" << endl;
            }
        }
        else
        {
            if (a > b)
            {
                cout << "First" << endl;
            }
            else
            {
                cout << "Second" << endl;
            }
        }
    }
}
