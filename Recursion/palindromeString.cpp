//String Palindrome

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


// bool palindrome(string words) {
//     string s = "";
//     for(char c : words) {
//         if(isalnum(c)) {
//             s += tolower(c);
//         }
//     }
    
//     string original = s;

//     reverse(s.begin(),s.end()); 

//     if(s == original) {
//         return true;
//     }
//     return false;
// }

//Using recursion
bool palindrome(int i,string s) {
    if(i >= s.size()/2) {
        return true;
    }
    if(s[i] != s[s.size()-i-1]) {
        return false;
    }
    return palindrome(i+1,s);
}

int main() {

    string x;
    cout << "Enter String to check it's a Palindrome or not: ";
    getline(cin,x);

    string newString = "";

    for(char ch : x) {
        if(isalnum(ch)) {
            newString+= tolower(ch);
        }
    }
    // cout << newString;

    bool isPalindrome = palindrome(0,newString);
    cout << isPalindrome;

    return 0;
}