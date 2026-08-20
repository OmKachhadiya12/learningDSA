// Subarrays with K Different Integers.

#include<bits/stdc++.h>
using namespace std;

int count(vector<int>& nums, int k) {
    int i = 0;
    int j = 0;
    int count = 0;
    unordered_map<int,int> mpp;

    while (j < nums.size()) {
        mpp[nums[j]]++;

        while(mpp.size() > k) {
            mpp[nums[i]]--;
            if(mpp[nums[i]] == 0) {
                mpp.erase(nums[i]);
            }
            i++;
        }

        if(mpp.size() <= k) {
            count += (j-i+1);
        }

        j++;
    }

    return count;
}

int subarraysWithKDistinct(vector<int>& nums, int k) {
    
    int count1 = count(nums,k);
    int count2 = count(nums,k-1); 

    return count1 - count2;
    
}

int main() {
    return 0;
}