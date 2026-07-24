// Next Greater Element 2.

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement2(vector<int> &nums) {

    int i = nums.size() - 1;
    stack<int> st;
    vector<int> ans(nums.size()); 

    while (i >= 0) {
        st.push(nums[i]);
        i--;
    }

    i = nums.size() - 1;

    while (i >= 0) {
        while (!st.empty() && nums[i] >= st.top()) {
            st.pop();
        }

        if(st.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = st.top();
        }

        st.push(nums[i]);
        i--; 
    }
    
    return ans;

}

int main() {
    return 0;
}