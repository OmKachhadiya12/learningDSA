// Sum of Beauty of all Substrings.

#include<bits/stdc++.h>
using namespace std;

int beautySum(string str) {
    int ans = 0;
    int n = str.length();
    int maxFreq = 0;
    int minFreq = INT_MAX;

    for (int i=0;i<n;i++){
        vector<int> freq(26,0);
        for (int j=i;j<n;j++){
            maxFreq = 0;
            minFreq = INT_MAX;
            freq[str[j] - 'a']++;
            for (int k=0;k<26;k++){
                if(freq[k] > 0) {
                    maxFreq = max(maxFreq,freq[k]);
                    minFreq = min(minFreq,freq[k]);
                }
            }
            ans += (maxFreq - minFreq);
        }
        
        
    }
    

    return ans;
}

int main() {

    string str;

    cout << "Enter String: ";
    getline(cin,str);

    cout << ": " << beautySum(str);

    return 0;
}