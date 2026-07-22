// Next greater element

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    int i = nums2.size() - 1;
    vector<int> result(nums2.size());
    
    while (i >= 0){
        while (!st.empty() && nums2[i] >= st.top()){
            st.pop();
        }
        if(st.empty()) {
            result[i] = -1;
        } else {
            result[i] = st.top();
        }

        st.push(nums2[i]);
        i--;
    }

    unordered_map<int,int> mpp;

    for (int i=0;i<nums2.size();i++){
        mpp[nums2[i]] = result[i];
    }
    

    vector<int> answer(nums1.size());

    for (int j=0;j<nums1.size();j++){
        answer[j] = mpp[nums1[j]];
    }

    return answer;
    
}