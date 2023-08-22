#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long sum = 0;
        unordered_set<int> distinct_elements;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
            distinct_elements.insert(a);
        }

        if (distinct_elements.size() == n && sum % n == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
