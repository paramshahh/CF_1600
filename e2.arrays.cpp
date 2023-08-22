#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int q;
    cin >> q;

    vector<pair<char, int>> actions;
    set<int> distinctNumbers;
    vector<int> distinctCount;

    while (q--)
    {
        char query;
        cin >> query;

        if (query == '+')
        {
            int x;
            cin >> x;
            actions.push_back(make_pair(query, x));
            distinctNumbers.insert(x);
        }
        else if (query == '-')
        {
            int k;
            cin >> k;
            actions.push_back(make_pair(query, k));
            while (k--)
            {
                distinctNumbers.erase(actions.end()[-1].second);
                actions.pop_back();
            }
        }
        else if (query == '?')
        {
            distinctCount.push_back(distinctNumbers.size());
        }
        else if (query == '!')
        {
            char lastQuery = actions.back().first;
            if (lastQuery == '+')
            {
                distinctNumbers.erase(actions.back().second);
            }
            else if (lastQuery == '-')
            {
                for (int i = 0; i < actions.back().second; ++i)
                {
                    distinctNumbers.insert(actions.end()[-i - 1].second);
                }
            }
            actions.pop_back();
        }
    }

    for (int count : distinctCount)
    {
        cout << count << endl;
    }

    return 0;
}
