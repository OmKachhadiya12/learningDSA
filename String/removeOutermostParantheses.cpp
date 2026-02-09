// Remove Outermost Parantheses. 

#include<bits/stdc++.h>
using namespace std;

string remove(string &str) {

    string result;
    int depth = 0;

    for(auto ch : str) {
        if(ch == '(') {
            if(depth > 0) {
                result += ch;
            }
            depth++;
        } else {
            depth--;
            if(depth > 0) {
                result += ch;
            }
        }
    }

    return result;
}

int main() {

    string str;

    cout << "Enter Pattern of Parantheses: ";
    getline(cin,str);

    cout << "Before: " << str;

    cout << "After: " << remove(str);

    return 0;
}