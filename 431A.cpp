#include <iostream>
#include <string>

using namespace std;

int main()
{
    int calories[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> calories[i];
    }

    string s;
    cin >> s;

    int totalCalories = 0;
    for (char c : s)
    {
        int strip = c - '0';
        totalCalories += calories[strip - 1];
    }

    cout << totalCalories << endl;

    return 0;
}
