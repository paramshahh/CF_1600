#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int books = 0;
    int totalTime = 0;
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        totalTime += arr[right];

        while (totalTime > t)
        {
            totalTime -= arr[left];
            left++;
        }

        books = max(books, right - left + 1);
    }

    cout << books << endl;

    return 0;
}
