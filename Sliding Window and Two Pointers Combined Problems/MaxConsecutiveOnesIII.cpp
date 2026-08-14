// Max Consecutive Ones III.

#include<bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int i = 0;
    int j = 0;
    int zeros = 0;
    int maxLong = 0;

    while (j < nums.size()) {

        if (nums[j] == 0) {
            zeros++;
        }

        if(zeros > k) {
            if(nums[i] == 0) {
                zeros--;
            }
            i++;
        }

        if(zeros <= k) {
            maxLong = max(maxLong, j - i + 1);
        }

        j++;
    }

    return maxLong;
    
}

int main() {
    return 0;
}