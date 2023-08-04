#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n;

    int boys[n];
    for (int i = 0; i < n; i++)
    {
        cin >> boys[i];
    }

    cin >> m;

    int girls[m];
    for (int i = 0; i < m; i++)
    {
        cin >> girls[i];
    }

    sort(boys, boys + n);
    sort(girls, girls + m);

    int boyIdx = 0, girlIdx = 0;
    int pairs = 0;

    while (boyIdx < n && girlIdx < m)
    {
        if (abs(boys[boyIdx] - girls[girlIdx]) <= 1)
        {
            pairs++;
            boyIdx++;
            girlIdx++;
        }
        else if (boys[boyIdx] < girls[girlIdx])
        {
            boyIdx++;
        }
        else
        {
            girlIdx++;
        }
    }

    cout << pairs << endl;

    return 0;
}
