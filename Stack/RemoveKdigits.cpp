// Remove K Digits.

#include<bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {

    if(k >= num.length()) {
        return "0";
    }

    string result = "";
    stack<char> st;

    for (int i=0;i<num.length();i++) {
        while (!st.empty() && k > 0 && st.top() - '0' > num[i] - '0') {
            st.pop();
            k--;
        }
        st.push(num[i]);
    }

    while (k > 0){
        st.pop();
        k--;
    }
    
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());

    int i = 0;

    while (i < result.length() && result[i] == '0') {
        i++;
    }

    result = result.substr(i);

    return result.empty() ? "0" : result;
            
}

int main() {
    return 0;
}