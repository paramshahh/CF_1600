#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string ans[t];

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int summands = 0;
        string res = "";

        while (n > 0)
        {
            int last_digit = n % 10;

            if (last_digit > 0)
            {
                int factor = pow(10, summands);
                int round_num = last_digit * factor;

                summands++;
                res = to_string(round_num) + " " + res;
            }

            n /= 10;
        }

        ans[i] = to_string(summands) + "\n" + res;

        for (int i = 0; i < t; i++)
        {
            cout << ans[i] << endl;
        }

        return 0;
    }