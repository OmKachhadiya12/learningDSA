// Largest Odd number in String.

#include<bits/stdc++.h>
using namespace std;

string largestOdd(string str) {

    int i = str.length() - 1;

    while (i >= 0) {
        if(str[i] % 2 == 0) {
            i--;
        } else {
            // str.erase(i+1,str.length())
            return str.substr(0,i+1);
        }
    }
    

    return str = "";
}

int main() {

    string str;

    cout << "Enter String: ";
    getline(cin,str);

    cout << "Largest: "<< largestOdd(str);

    return 0;
}