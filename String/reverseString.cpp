// Reverse string.

#include<bits/stdc++.h>
using namespace std;

void reverseString(string str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    
    return;
}

int main() {

    string str;

    cout << "Enter String: ";
    getline(cin,str);

    cout << "Before: " << str;

    reverseString(str);

    cout << "After: " << str;

    return 0;
}