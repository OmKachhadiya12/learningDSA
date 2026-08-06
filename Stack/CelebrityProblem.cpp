// Celebrity Problem.

#include<bits/stdc++.h>i

using namespace std;

int findCelebrity(vector<vector<int>> arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low < high) {
        if(arr[low][high] == 1) {
            low++;
        } else if(arr[high][low] == 1) {
            high--;
        } else {
            low++;
            high--;
        }
    }

    if(high > low) {
        return -1;
    }

    for(int i=0; i < arr.size(); i++) {
        if(i == high) continue;
            
        if(arr[high][i] == 1 || arr[i][high] == 0) {
            return -1;
        }
    }

    return high;
    
}

int main() {
    return 0;
}