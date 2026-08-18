// Longest Repeating Character Replacement.

#include<bits/stdc++.h>;
using namespace std;

int characterReplacement(string s, int k) {
    int i = 0;
    int j = 0;
    int maxFreq = 0;
    int maxLength = 0;
    int freq[26] = {0};
    
    while (j < s.length()) {
        freq[s[j] - 'A']++;
        maxFreq = max(maxFreq,freq[s[j] - 'A']);

        if((j - i + 1) - maxFreq > k) {
            freq[s[i] - 'A']--;
            i++;
        }

        maxLength = max(maxLength,j - i + 1);
        j++;

    }

    return maxLength;
    
}

int main() {
    return 0;
}