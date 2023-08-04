#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        char c;
        cin >> c;
        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}