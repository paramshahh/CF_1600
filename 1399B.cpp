#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr1[size], arr2[size], min1 = 1000000001, min2 = 1000000001;

        for (int i = 0; i < size; i++)
        {
            cin >> arr1[i];
            if (arr1[i] < min1)
            {
                min1 = arr1[i];
            }
        }
        for (int i = 0; i < size; i++)
        {
            cin >> arr2[i];
            if (arr2[i] < min2)
            {
                min2 = arr2[i];
            }
        }

        long long moves = 0;
        for (int i = 0; i < size; i++)
        {
            int diff1 = arr1[i] - min1;
            int diff2 = arr2[i] - min2;
            moves += max(diff1, diff2);
        }

        cout << moves << endl;
    }
}
