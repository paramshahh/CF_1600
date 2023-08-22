#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a valid bracket sequence
bool isValidBracketSequence(const string &s)
{
    int balance = 0;
    for (char c : s)
    {
        if (c == '(')
        {
            balance++;
        }
        else
        {
            balance--;
            if (balance < 0)
            {
                return false;
            }
        }
    }
    return balance == 0;
}

// Function to generate a regular bracket sequence
string generateRegularBracketSequence(const string &s)
{
    string regularSequence = "";
    int openCount = 0;
    int closeCount = 0;

    for (char c : s)
    {
        if (c == '(')
        {
            regularSequence += '(';
            openCount++;
        }
        else
        {
            regularSequence += ')';
            closeCount++;
        }

        if (openCount == closeCount)
        {
            regularSequence += '(';
            openCount++;
        }
    }

    while (openCount--)
    {
        regularSequence += ')';
    }

    return regularSequence;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (!isValidBracketSequence(s))
        {
            string regularSequence = generateRegularBracketSequence(s);
            cout << "YES" << endl;
            cout << regularSequence << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
