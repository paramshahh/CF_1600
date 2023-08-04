#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;
        m = 60 - m;
        h = 23 - h;
        h = h * 60;
        cout << h + m << endl;
    }
}