//Minimum in Rotated and Sorted Array.

#include<bits/stdc++.h>
using namespace std;

int mini(int arr[],int n) {
    int ans = INT_MAX;

    int low = 0;
    int high = n - 1;

    while (low <= high){
        int mid = low + (high - low) / 2;

        if(arr[low] <= arr[high]) {
            ans = min(ans,arr[low]);
            break;
        }

        if(arr[low] <= arr[mid]) {
            ans = min(ans,arr[low]);
            low = mid + 1;
        } else {
            ans = min(ans,arr[mid]);
            high = mid - 1;
        }
        
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter  the size of an Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Elements: ";

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int ans = mini(arr,n);

    cout << ans;

    return 0;
}