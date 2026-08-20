// Count Number of Nice Subarrays.

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
            sum += (nums[j] % 2);

            while(sum > goal) {
                sum -= (nums[i] % 2);
                i++;
            }

            if(sum <= goal) {
                count = count + (j-i+1);
                j++;
            }
        }

        return count;
    }

int numberOfSubarrays(vector<int>& nums, int k) {

    int count1 = noOfSubarray(nums,k);
    int count2 = noOfSubarray(nums,k-1);

    return count1 - count2;

}

int main() {
    return 0;
}