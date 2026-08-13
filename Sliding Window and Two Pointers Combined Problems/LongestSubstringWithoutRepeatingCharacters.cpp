// Longest Substring Without Repeating Characters.

#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char,int> mpp;
    int i = 0;
    int j = 0;
    int length = 0;
    int maxLength = 0;
    
    while (j < s.length()){
        if(mpp.find(s[j]) == mpp.end()) {
            mpp[s[j]] = j;
        } else {
            i = max(i,mpp[s[j]] + 1);
            mpp[s[j]] = j;
        }
        length = j - i + 1;
        maxLength = max(maxLength,length);
        j++;
    }

    return maxLength;
    
}

int main() {
    return 0;
}