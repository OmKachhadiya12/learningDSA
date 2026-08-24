// Jump Game I.

#include<bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
    int maxIndex = 0;
    int i = 0;

    while (i < nums.size()) {
        if(maxIndex < i) {
            return false;
        }

        maxIndex = max(maxIndex,i + nums[i]);

        i++;
    }

    return true;
    
}

int main() {
    return 0;
}