//Buy and Sell Stock problem

#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[],int n) {
    int maxprofit = 0;
    int mini = arr[0];
    
    for(int i=1;i<n;i++) {
        maxprofit = max(maxprofit,arr[i] - mini);
        mini = min(mini,arr[i]);
    }

    return maxprofit;
    
}

int main() {

    int n;
    cout << "Enter size of an array: ";
    cin >> n;
 
    int arr[n];

    cout << "Enter the elements of it: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int profit = maxProfit(arr,n);

    cout << profit;
    
    return 0;
}