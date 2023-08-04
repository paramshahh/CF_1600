#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int maxGCD = 1;

        for (int j = n - 1; j >= 2; j--)
        {
            int currentGCD = gcd(j, n);
            if (currentGCD > maxGCD)
            {
                maxGCD = currentGCD;
            }
        }

        cout << maxGCD << endl;
    }

    return 0;
}
