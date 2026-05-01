// Generate Parentheses.

#include<bits/stdc++.h>
using namespace std;

void solve(int n,int open,int close,string &temp,vector<string> &ans) {

    if(open == n && close == n) {
        ans.push_back(temp);
        return;
    }
 
    if(open < n) {
        temp.push_back('(');
        solve(n,open+1,close,temp,ans);
        temp.pop_back();
    }

    if(close < open) {
        temp.push_back(')');
        solve(n,open,close+1,temp,ans);
        temp.pop_back(); 
    }

}

vector<string> generateParentheses(int n) {

    string temp;
    vector<string> ans;
    int open = 0;
    int close = 0;

    solve(n,open,close,temp,ans);

    return ans;
    
} 

int main() {
    return 0;
}