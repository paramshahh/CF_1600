#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len, x = 0, y = 0;
        cin >> len;
        char arr[len];
        bool flag = false;

        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
            if (arr[i] == 'L')
            {
                x--;
            }
            else if (arr[i] == 'U')
            {
                y++;
            }
            else if (arr[i] == 'D')
            {
                y--;
            }
            else if (arr[i] == 'R')
            {
                x++;
            }
            if (x == 1 & y == 1)
            {
                flag = true;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}