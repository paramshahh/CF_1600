#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        int arr[4];
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[j];
            if (arr[0] < arr[j])
            {
                ans = ans + 1;
            }
        }
        cout << ans << endl;
    }
}