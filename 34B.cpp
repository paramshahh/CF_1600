#include <iostream>

using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int x = -1;

    for (int i = 0; i < m; i++)
    {
        x = sum;
        sum += arr[i];
        sum = min(x, sum);
    }
    cout << -sum << endl;
}