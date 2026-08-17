// 	Longest Substring With At Most K Distinct Characters.

#include<bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {
    int i = 0;
    int j = 0;
    int maxLength = 0;
    unordered_map<char,int> mpp;

    while (j < s.length()) {
        mpp[s[j]]++;

        if(mpp.size() > k){
            // while (mpp.size() > k) {
            //     mpp[s[i]]--;
            //     if(mpp[s[i]] == 0) {
            //         mpp.erase(s[i]);
            //     }
            //     i++;
            // }

            mpp[s[i]]--;
            if(mpp[s[i]] == 0) {
                mpp.erase(s[i]);
            }
            i++;

        } 

        if(mpp.size() <= k) {
            maxLength = max(maxLength,j - i + 1);
        }

        j++;
    }

    return maxLength;
    
}

int main() {
    return 0;
}