#include <iostream>
#include <cmath>

using namespace std;

bool hasOddDivisor(long long n)
{
    if (n % 2 == 0)
    {
        while (n % 2 == 0)
        {
            n /= 2;
        }
    }

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return true;
        }
    }

    return n > 1;
}

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        long long n;
        cin >> n;

        if (hasOddDivisor(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
