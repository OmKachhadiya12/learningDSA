// Rotate Strings.

#include<bits/stdc++.h>
using namespace std;


bool rotateString(string str, string str2) {

    // int n = str.length();
    // if(n != str2.length()) return false;

    // char firstChar = str[0];

    // for(int start = 0; start < n; start++) {

    //     if(str2[start] != firstChar) continue;

    //     int i = 0;
    //     int j = start;

    //     while(i < n) {
    //         if(j == n) j = 0;

    //         if(str[i] != str2[j]) break;

    //         i++;
    //         j++;
    //     }

    //     if(i == n) return true;
    // }

    // return false;

    int m = str.length();
    int n = str2.length();

    if(m != n) {
        return false;
    }

    if((str + str).find(str2) != string::npos) {
        return true;
    }

    return false;

}

int main() {

    string str;

    cout << "Enter String: ";
    getline(cin,str);
    
    string str2;
    cout << "Enter String2: ";
    getline(cin,str2);

    bool isRotated = rotateString(str,str2);

    cout << isRotated;

    return 0;
}