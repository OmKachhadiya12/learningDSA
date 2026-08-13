// Maximum Points You Can Obtain from Cards.

#include<bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& cardPoints, int k) {
    int i = 0;
    int sum = 0;
    int maxSum = 0;
    int n = cardPoints.size() - 1;

    while (i < k) {
        sum += cardPoints[i];
        i++;
    }

    maxSum = sum;
    
    while (i > 0){
        i--;
        sum = sum - cardPoints[i];
        sum = sum + cardPoints[n];
        n--;
        maxSum = max(maxSum,sum);
    }

    return maxSum;
    
}

int main() {
    return 0;
}