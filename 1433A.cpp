#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, ans;
        cin >> n;
        int size = trunc(log10(n)) + 1;
        n = n % 10;
        int ceil = n * 10;

        if (size == 1)
        {
            ans = ceil - 9;
            cout << ans << endl;
        }
        else if (size == 2)
        {
            ans = ceil - 7;
            cout << ans << endl;
        }
        else if (size == 3)
        {
            ans = ceil - 4;
            cout << ans << endl;
        }
        else
        {
            ans = ceil;
            cout << ans << endl;
        }
    }
}