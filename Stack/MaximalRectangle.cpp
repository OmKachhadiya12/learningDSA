// Maximal Rectangle.

#include<bits/stdc++.h>
using namespace std;

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

int maximalRectangle(vector<vector<char>>& matrix) {
    int row = matrix.size();
    int column = matrix[0].size();
    vector<int> heights(column,0);
    int largestArea = 0;

    for (int i=0;i<row;i++) {

        int j = 0;
        while (j < column) {
            if(matrix[i][j] == '1') {
                heights[j]++;
            } else {
                heights[j] = 0;
            }
            j++;
        }

        int area = largestRectangleArea(heights);

        largestArea = max(largestArea,area);
        
    }

    return largestArea;
    
}

int main() {return 0;}