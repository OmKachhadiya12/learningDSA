// Trapping Rainwater.

#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {

    int leftMax = 0;
    int rightMax = 0;
    int  totalTrap = 0;
    int l = 0;
    int r = height.size() - 1;
    
    while (l < r) {
        if(height[l] < height[r]) {
            if(leftMax > height[l]) {
                totalTrap += leftMax - height[l];
            } else {
                leftMax = height[l];
            }
            l++;
        } else {
            if(rightMax > height[r]) {
                totalTrap += rightMax - height[r];
            } else {
                rightMax = height[r];
            }
            r--;
        }
    }
    
    return totalTrap;
        
}

int main() {
    return 0;
}