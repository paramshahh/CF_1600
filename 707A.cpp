#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    char arr[r][c];
    bool flag = false;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y')
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }
}