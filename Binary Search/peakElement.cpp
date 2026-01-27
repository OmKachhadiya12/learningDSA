//Find Peak element.

#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;

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

    int ans = search(arr,n);

    cout << ans;

    return 0;
}