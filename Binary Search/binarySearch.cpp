// Binary Search
 
#include<bits/stdc++.h> 
using namespace std;

int binarySearch(int arr[],int n,int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high){
        int  mid = (low + high) / 2;

        if(arr[mid] == target) {
            return mid;
        } else if(target > arr[mid]) {
            low = mid + 1; 
        } else {
            high = mid - 1;
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
    
    int index = binarySearch(arr,n,target);

    cout << index;

    return 0;
}