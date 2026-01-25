//Search in Rotated and Sorted Array.

#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high){
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if(arr[low] <= arr[mid]) {
            if(arr[low] <= target && target < arr[mid]) {
                high = mid - 1;
            } else {git
                low = mid + 1;
            }
        } else {
            if(target <= arr[high] && target > arr[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return -1;

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

    int target;
    cout << "Enter the Target: ";
    cin >> target;

    int ans = search(arr,n,target);

    cout << ans;

    return 0;
}