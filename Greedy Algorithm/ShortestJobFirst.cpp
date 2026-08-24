// Shortest Job First.

#include<bits/stdc++.h>
using namespace std;

int findSJF(vector<int> arr) {
    sort(arr.begin(),arr.end());

    int i = 0;
    int time = 0;
    int wtTime = 0;

    while (i < arr.size()) {
        wtTime += time;
        time += arr[i];
    }

    return wtTime / arr.size();
    
}

int main() {
    return 0;
}