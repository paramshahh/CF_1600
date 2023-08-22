#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string x;
        cin >> x;

        int size = x.size();
        bool flag = false;
        int indicator = 0;

        for (int i = 0; i < size; i++)
        {
            if (x[i] >= '5' && i == 0)
            {
                x[i] = 1;
                flag = true;
                break;
            }
            else if (x[i] >= '5')
            {
                x[i] = 0;
                x[i - 1]++;
                flag = false;
                indicator = i;
                break;
            }
            else
            {
                indicator++;
            }
        }
        /////////////////
        if (flag == true)
        {
            cout << pow(10, size) << endl;
        }
        else if (flag == false && indicator > 0)
        {
            for (int i = 0; i < indicator + 1; i++)
            {
                cout << x[i];
            }
            for (int i = 0; i < x.size() - indicator; i++)
            {
                cout << '0';
            }
            cout << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
}