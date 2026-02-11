// Valid Anagram.

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string str,string str2) {

    int m = str.length();
    int n = str2.length();

    if(m != n) {
        return false;
    }

    vector<int> freq(256,0);

    for (int i=0;i<m;i++){
        freq[str[i]]++;
        freq[str2[i]]--;
    }
    

    for(auto it : freq) {
        if(it != 0) {
            return false;
        }
    }

    return true;
}

int main() {

    string str;

    cout << "Enter String: ";
    getline(cin,str);
    
    string str2;
    cout << "Enter String2: ";
    getline(cin,str2);

    bool isRotated = isAnagram(str,str2);

    cout << isRotated;

    return 0;
}