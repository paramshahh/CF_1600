#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int steps = 0;
    if (m < n)
    {
        cout << n - m << "\n";
        return 0;
    }
    while (n < m)
    {
        if (m % 2 == 0)
        {
            m /= 2;
        }
        else
        {
            m++;
        }
        steps++;
    }
    cout << abs(steps + n - m) << "\n";

    return 0;
}