// Roman to Integer.

#include<bits/stdc++.h>
using namespace std;

int romanToInteger(string str) {
    unordered_map<char,int> mpp = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int ans = 0;
    int prev = 0;

    for(int i = str.length() - 1; i >= 0; i--) {
        int curr = mpp[str[i]];

        if(curr < prev) {
            ans -= curr;
        } else {
            ans += curr;
        }

        prev = curr;
    }

    return ans;
}

int main() {

    string str;

    cout << "Enter String: ";
    getline(cin,str);

    cout << ":" << romanToInteger(str);

    return 0;
}