// Nearest Smaller Element.

#include<bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerElement(vector<int> &nums) {
    int i = 0;
    stack<int> st;
    vector<int> ans(nums.size());

    while(i < nums.size()) {
        while (!st.empty() && nums[i] <= st.top()) {
            st.pop();
        }

        if(st.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = st.top();
        }

        st.push(nums[i]);
        i++;
    }

    return ans;

}

int main() {
    return 0;
}