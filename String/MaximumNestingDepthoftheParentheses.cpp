// Maximum Nesting Depth of the Parentheses.

#include<bits/stdc++.h>
using namespace std;

int maxDepth(string str) {
    int ans = 0;
    int depth = 0;
    int i = 0;
    int n = str.length();

    while (i < n) {
        if(str[i] == '(') {
            depth++;
            ans = max(ans,depth);
            i++;
        } else if(str[i] == ')') {
            depth--;
            i++;
        } else {
            i++;
        }
    }
    return ans;
}

int main() {

    string str;

    cout << "Enter String: ";
    getline(cin,str);

    cout << ":" << maxDepth(str);

    return 0;
}