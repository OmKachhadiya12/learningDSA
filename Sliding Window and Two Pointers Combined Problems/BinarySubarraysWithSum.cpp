// Binary Subarrays With Sum.

#include<bits/stdc++.h>
using namespace std;

int noOfSubarray(vector<int>& nums,int goal) {
    if(goal < 0) {
        return 0;
    }
    int i = 0;
    int j = 0;
    int sum = 0;
    int count = 0;
    
    while (j < nums.size()) {
        sum += nums[j];

        while(sum > goal) {
            sum -= nums[i];
            i++;
        }

        if(sum <= goal) {
            count = count + (j-i+1);
            j++;
        }
    }

    return count;
}

int numSubarraysWithSum(vector<int>& nums, int goal) {
    
    int count1 = noOfSubarray(nums,goal);
    int count2 = noOfSubarray(nums,goal-1);

    return count1 - count2;
    
}

int main() {
    return 0;
}