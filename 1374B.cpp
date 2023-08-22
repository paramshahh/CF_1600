#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, steps = 0;
        cin >> n;

        while (n != 1)
        {
            if (n % 6 == 0)
            {
                n /= 6, steps++;
            }
            else if (n % 3 == 0)
            {
                n *= 2, steps++;
            }
            else
            {
                steps = -1;
                break;
            }
        }
        cout << steps << endl;
    }
}