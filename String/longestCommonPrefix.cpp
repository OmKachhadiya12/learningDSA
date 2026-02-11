// Longest Common Prefix.

#include<bits/stdc++.h>
using namespace std;

string lcp(vector<string> str) {
    if(str.empty()) {
        return "";
    }
    string ans;
    int n = str.size();
    sort(str.begin(),str.end());

    string first = str[0],last = str[n - 1];
    int i = 0;

    while (i < first.length() && i < last.length()){
        if(first[i] == last[i]) {
            ans += first[i];
            i++;
        } else {
            return ans;
        }
    }

    return ans;
}

int main() {

    int n;
    cout << "How many String you want add: ";
    cin >> n;

    vector<string> str(n);
    cout << "Enter the Strings: ";
    for (int i=0;i<n;i++){
        cin >> str[i];
    }
    
    string ans = lcp(str);

    cout << ans;
    return 0;
}