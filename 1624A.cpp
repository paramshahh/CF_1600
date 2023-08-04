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
        int s;
        cin >> s;

        int arr[s];
        for (int j = 0; j < s; j++)
        {
            cin >> arr[j];
        }
        int max = 0;
        int min = 1000000000;
        for (int j = 0; j < s; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
            if (arr[j] < min)
            {
                min = arr[j];
            }
        }
        int ans = max - min;
        cout << ans << endl;
    }
}