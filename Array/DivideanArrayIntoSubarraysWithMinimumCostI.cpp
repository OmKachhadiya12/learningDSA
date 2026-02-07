//Divide an Array Into Subarrays With Minimum Cost I.

#include<bits/stdc++.h>
using namespace std;

int minimumCost(int arr[],int n) {
    int cost = 0;
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i=1;i<n;i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    cost = arr[0] + smallest + secondSmallest; 

    return cost;
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

    int ans = minimumCost(arr,n);

    cout << ans;
    
    return 0;
}     