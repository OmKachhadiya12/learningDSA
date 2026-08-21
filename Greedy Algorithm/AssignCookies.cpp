// Assign Cookies.
// Maximum Matching of Players With Trainers

// Both are same problems.

#include<bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());

    int count = 0;
    int i = 0, j = 0;

    while (j < s.size() && i < g.size()) {
        if (s[j] >= g[i]){
            count++;
            i++;
            j++;
        } else {
            j++;
        }    
    }

    return count;
        
}

int main() {
    return 0;
}