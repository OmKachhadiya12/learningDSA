// Infix to Prefix.

#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string convertIt(string s)
{
    string ans = "";
    stack<char> st;
    int i = 0;

    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            s[i] = ')';
        }
        else if (s[i] == ')')
        {
            s[i] = '(';
        }
    }

    while (i < s.size())
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans = ans + s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans = ans + st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if(s[i] == '^') {
                while (!st.empty() && priority(s[i]) <= priority(st.top())){
                    ans = ans + st.top();
                    st.pop();
                }
            }   else {
                while (!st.empty() && priority(s[i]) < priority(st.top())){
                    ans = ans + st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }

        i++;
    }

    while (!st.empty()){
        ans = ans + st.top();
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    return ans;

}

int main()
{
    return 0;
}