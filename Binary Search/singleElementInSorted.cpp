//Single Element in the Sorted array.

#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if(mid % 2 == 1) {
            mid--;
        }

        if(arr[mid] == arr[mid+1]) {
            low = mid + 2;
        } 
        else {
            high = mid;
        }

    }
    

    return arr[low];
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

    return 0;
}