#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int min_sum = 0, current_sum = 0;
    for (int i = 0; i < k; i++)
    {
        current_sum += heights[i];
    }
    min_sum = current_sum;
    int min_idx = 0;

    for (int i = 1; i <= n - k; i++)
    {
        current_sum -= heights[i - 1];
        current_sum += heights[i + k - 1];
        if (current_sum < min_sum)
        {
            min_sum = current_sum;
            min_idx = i;
        }
    }

    cout << min_idx + 1 << endl;

    return 0;
}
