#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int h = 0;
    int c = 0;

    while (c <= n)
    {
        h++;
        c += (h * (h + 1)) / 2;
    }

    cout << h - 1 << endl;

    return 0;
}
