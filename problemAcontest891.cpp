#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        int odd_count = 0, even_count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }

        if ((odd_count % 2 == 0) && (odd_count > 1) || (odd_count == 0 && even_count > 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
