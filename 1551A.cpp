#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, rem;
        cin >> n;

        rem = n % 3;

        if (rem == 0)
        {
            int caout = n / 3;
            int cbout = n / 3;
            cout << caout << ' ' << cbout << endl;
        }
        else if (rem == 1)
        {
            int caout = (n / 3) + 1;
            int cbout = n / 3;
            cout << caout << ' ' << cbout << endl;
        }
        else
        {
            int caout = n / 3;
            int cbout = (n / 3) + 1;
            cout << caout << ' ' << cbout << endl;
        }
    }
}