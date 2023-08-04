#include <iostream>
using namespace std;

int find_floor(int n, int x)
{
    if (n <= 2)
        return 1;

    n -= 2;
    int floor = 1;
    while (n > x)
    {
        n -= x;
        floor++;
    }
    return floor + 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        cout << find_floor(n, x) << endl;
    }

    return 0;
}
