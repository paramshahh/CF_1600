#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n < 1400)
        {
            cout << "Division 4" << endl;
        }
        else if (1400 <= n && n < 1600)
        {
            cout << "Division 3" << endl;
        }
        else if (1600 <= n && n < 1900)
        {
            cout << "Division 2" << endl;
        }
        else
        {
            cout << "Division 1" << endl;
        }
    }
}