// Minimum Window Substring.

#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t)
{
    int i = 0;
    int j = 0;
    int counter = 0;
    int sIndex = -1;
    int minLength = INT_MAX;
    int hash[256] = {0};

    for (int i = 0; i < t.length(); i++)
    {
        hash[t[i]]++;
    }

    while (j < s.length())
    {
        hash[s[j]]--;
        if (hash[s[j]] >= 0)
        {
            counter++;
        }

        while (counter == t.length())
        {
            if ((j - i + 1) < minLength)
            {
                minLength = j - i + 1;
                sIndex = i;
            }
            hash[s[i]]++;
            if (hash[s[i]] > 0)
            {
                counter--;
            }
            i++;
        }

        j++;
    }

    return sIndex == -1 ? "" : s.substr(sIndex, minLength);
}

int main()
{
    return 0;
}