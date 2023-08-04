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
        int n, k = 2, sum;
        cin >> n;
        sum = pow(2, k) - 1;

        while (n % sum != 0)
        {
            k++;
            sum = pow(2, k) - 1;
        }

        int ans = n / sum;
        cout << ans << endl;
    }
}