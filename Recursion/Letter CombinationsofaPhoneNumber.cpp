// Letter Combinations of a Phone Number.

#include<bits/stdc++.h>;
using namespace std;

unordered_map<char, string> mp = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};

void solve(int i,string &digits,string &temp,vector<string> &ans) {

    if(i == digits.length()) {
        ans.push_back(temp);
        return;
    }

    string letters = mp[digits[i]];

    for(char letter : letters) {
        temp.push_back(letter);
        solve(i+1,digits,temp,ans);
        temp.pop_back();
    }

}

vector<string> letterCombinations(string &digits) {

    if(digits.empty()) {
        return {};
    }
    
    string temp;
    vector<string> ans;
    solve(0,digits,temp,ans);
    
    return ans;
}

int main() {
    return 0;
}