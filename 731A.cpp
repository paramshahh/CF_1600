#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int current = 0;
    int rot = 0;

    for (char c : s)
    {
        int target = c - 'a';
        int clockwise = (target - current + 26) % 26;
        int counterclockwise = (current - target + 26) % 26;
        rot += min(clockwise, counterclockwise);
        current = target;
    }

    cout << rot << endl;

    return 0;
}
