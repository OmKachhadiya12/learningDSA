// Sort Characters by Frequency.

#include<bits/stdc++.h>
using namespace std;

string frequencySort(string str) {

    // Worst Case.

    // unordered_map<char,int> mpp;

    // for(int i=0;i<str.length();i++) {
    //     mpp[str[i]]++;
    // }

    // vector<pair<char,int>> vec;

    // for(auto it : mpp) {
    //     vec.push_back(it);
    // }

    // sort(vec.begin(), vec.end(), [](auto a, auto b){
    //     return a.second > b.second;
    // });

    // string ans = "";

    // for(auto it : vec) {
    //     ans += string(it.second,it.first);
    // }
    
    // return ans;

    unordered_map<char,int> mpp;

    for(int i=0;i<str.length();i++) {
        mpp[str[i]]++;
    }

    vector<vector<char>> bucket(str.length() + 1);

    for(auto it : mpp) {
        bucket[it.second].push_back(it.first);
    }

    string ans = "";

    for(int i = str.length(); i >= 1; i--) {
        for(char ch : bucket[i]) {
            ans += string(i, ch);
        }
    }
    
    return ans;
}

int main() {

    string str;

    cout << "Enter String: ";
    getline(cin,str);

    cout << "Before: " << str;

    cout << "After: " << frequencySort(str);

    return 0;
}