// Palindrome Partitioning.

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int start,int end) {
    while (start <= end){
        if(s[start++] != s[end--])  {
            return false;
        }
    }
    return true;
    
}
 
void solve(int i,string s,vector<string> &temp,vector<vector<string>> &ans) {

    if(i >= s.size()) {
        ans.push_back(temp);
        return;
    }

    for (int j=i;j<s.size();j++){
        if(isPalindrome(s,i,j)) {
            temp.push_back(s.substr(i,j-i+1));
            solve(j+1,s,temp,ans);
            temp.pop_back();
        }
    }
    

}

vector<vector<string>> partition(string s) {
    
    vector<string> temp;
    vector<vector<string>> ans;
    solve(0,s,temp,ans);

    return ans;
 
}

int main() {
    return 0;
}