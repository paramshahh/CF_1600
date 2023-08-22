#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n1, n2;
        char sign;
        cin >> n1 >> sign >> n2;
        if (sign == '+')
        {
            cout << n1 + n2 << endl;
        }
    }
}