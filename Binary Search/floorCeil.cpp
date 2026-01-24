//Floor and Ceil in an Sorted Array.

#include<bits/stdc++.h>
using namespace std;

int ceeil(int arr[],int n,int target) {
    int ans = n;
    int low = 0;
    int high = n - 1;

    while (low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        } 
    }
    
    return ans;
}

int flooor(int arr[],int n,int target) {
    int ans = n;
    int low = 0;
    int high = n - 1;

    while (low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] <= target) {
            ans = mid;
            low = mid + 1;
        } else {
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

    int target;
    cout << "Enter the Target: ";
    cin >> target;

    int floor = flooor(arr,n,target);
    int ceil = ceeil(arr,n,target);
    
    cout << flooor << " " << ceeil;

    return 0;
}