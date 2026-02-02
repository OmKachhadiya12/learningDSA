//Kth Missing Positive Number.

#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int k) {
    int low = 0;
    int high = n - 1;
    int missing;

    while (low <= high){
     int mid = low + (high - low) / 2;
     
     missing = arr[mid] - (mid + 1);

    if (missing >= k){
        
        high = mid - 1;
    } else {
        low = mid + 1;
    }
    }

    return low + k;

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

    int k;
    cout << "Enter the K: ";
    cin >> k;

    int ans = search(arr,n,k);

    cout << ans;

    return 0;
}