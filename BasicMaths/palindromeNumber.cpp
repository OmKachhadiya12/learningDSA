//Palindrome Number

#include<bits/stdc++.h>
using namespace std;

int palindrome(int n) {
    int originalNum = n;
    int rev = 0;

    if(n<0) {
        return false;
    }

    while (n != 0) {
        int digit = n % 10;
        rev = (rev * 10) + digit;

        if(rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }

        n = n / 10;
    }

    if(rev == originalNum) {
        return true;
    } else {
        return false;
    }
    
}

int main() {

    int x;
    cout << "Enter number to check it's a Palindrome Number or not: ";
    cin >> x;

    bool isPalindrome = palindrome(x);

    cout << isPalindrome;

    return 0;
}