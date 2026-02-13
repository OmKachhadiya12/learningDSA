// Longest Palindrome Substring.

#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string str) {
    int start = 0;
    int maxLen = 1;
    int n = str.length();

    for (int i=0;i<n;i++){
        
        // Checking the Odd length palindrome substring.
        int l = i;
        int r = i;
        while (l >= 0 && r < n && str[l] == str[r]){
            if(r - l + 1 > maxLen) {
                start =   l;
                maxLen = r - l + 1;
            }
            l--;
            r++;
        }

        // Cj=hecking the Even length palindrome substring.
        l = i;
        r = i + 1;
        while (l >= 0 && r < n && str[l] == str[r]){
            if(r - l + 1 > maxLen) {
                start =   l;
                maxLen = r - l + 1;
            }
            l--;
            r++;
        }
        
    }

    return str.substr(start,maxLen);
    
}

int main() {

    string str;

    cout << "Enter String: ";
    getline(cin,str);

    cout << ": " << longestPalindrome(str);

    return 0;
}