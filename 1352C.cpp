#include <iostream>

using namespace std;

bool isKthNonDivisible(long long n, long long k, long long num)
{
    long long count = num - num / n;
    return count >= k;
}

long long findKthNonDivisible(long long n, long long k)
{
    long long left = 1;
    long long right = k * n;
    long long result = -1;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;

        if (isKthNonDivisible(n, k, mid))
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        long long n, k;
        cin >> n >> k;

        long long result = findKthNonDivisible(n, k);
        cout << result << endl;
    }

    return 0;
}
