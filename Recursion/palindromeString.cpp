//String Palindrome

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool palindrome(string words) {
    string s = "";
    for(char c : words) {
        if(isalnum(c)) {
            s += tolower(c);
        }
    }
    
    string original = s;

    reverse(s.begin(),s.end()); 

    if(s == original) {
        return true;
    }
    return false;
}

int main() {

    string x;
    cout << "Enter String to check it's a Palindrome or not: ";
    getline(cin,x);

    bool isPalindrome = palindrome(x);
    cout << isPalindrome;

    return 0;
}