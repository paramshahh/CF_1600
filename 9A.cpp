#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int y, w;
    cin >> y >> w;
    int minnum = max(y, w);
    if (minnum == 1)
    {
        cout << "1/1";
    }
    else if (minnum == 2)
    {
        cout << "5/6";
    }
    else if (minnum == 3)
    {
        cout << "2/3";
    }
    else if (minnum == 4)
    {
        cout << "1/2";
    }
    else if (minnum == 5)
    {
        cout << "1/3";
    }
    else
    {
        cout << "1/6";
    }
}