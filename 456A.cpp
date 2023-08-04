#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool happyAlex = false;

    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;

        for (int j = 0; j < n; j++)
        {
            int op, oq;
            cin >> op >> oq;

            if (p < op && q > oq)
            {
                happyAlex = true;
                break;
            }
        }

        if (happyAlex)
        {
            break;
        }
    }

    if (happyAlex)
    {
        cout << "Happy Alex" << endl;
    }
    else
    {
        cout << "Poor Alex" << endl;
    }

    return 0;
}
