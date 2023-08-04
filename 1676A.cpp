#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string ticket;
        cin >> ticket;

        int first_sum = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
        int last_sum = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');

        if (first_sum == last_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
