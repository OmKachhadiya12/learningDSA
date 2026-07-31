// Largest rectangle in Histogram.

#include<bits/stdc++.h>
using namespace std;

// vector<int> nse(vector<int> &heights) {
//     stack<int> st;
//     int i = heights.size() - 1;
//     vector<int> nsee (heights.size());

//     while (i >= 0)  {
//         while (!st.empty() && heights[i] <= heights[st.top()]) {
//             st.pop();   
//         }
//         nsee[i] = st.empty() ? heights.size() : st.top();
//         st.push(i);
//         i--;
//     }
//    return nsee; 
// }

// vector<int> pse(vector<int> &heights) {
//     stack<int> st;
//     int i = 0;
//     vector<int> psee (heights.size());

//     while (i < heights.size())  {
//         while (!st.empty() && heights[i] < heights[st.top()]) {
//             st.pop();   
//         }
//         psee[i] = st.empty() ? -1 : st.top();
//         st.push(i);
//         i++;
//     }
//    return psee; 
// }

// int largestRectangleArea(vector<int>& heights) {
//     vector<int> NSE = nse(heights);
//     vector<int> PSE = pse(heights);
//     int largestArea = 0;

//     for (int i=0;i<heights.size();i++){
//         int area = heights[i] * (NSE[i] - PSE[i] - 1);
//         largestArea = max(largestArea,area);
//     }

//     return largestArea;
    
// }

int largestRectangleArea(vector<int>& heights) {
    int maxArea = 0;
    stack<int> st;
    int i = 0;

    while (i < heights.size()) {
        while (!st.empty() && heights[i] < heights[st.top()]) {
            int element = st.top();
            st.pop();
            int nse = i;
            int pse = st.empty() ? -1 : st.top(); 
            int area = heights[element] * (nse - pse - 1);
            maxArea = max(maxArea,area);
        }
        st.push(i);
        i++;
        
    }

    while (!st.empty()) {
        int element = st.top();
        st.pop();
        int nse = heights.size();
        int pse = st.empty() ? -1 : st.top();
        int area = heights[element] * (nse - pse - 1);
        maxArea = max(maxArea,area);
    }
    
    return maxArea;
    
}

int main() {
    return 0;
}