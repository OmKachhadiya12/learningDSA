// Aggressive Cows.
 
#include<bits/stdc++.h> 
using namespace std;

// In  the brute force I am not able to find the Maximum no of Distance.  

bool checking (int arr[],int n,int dist,int cows) {
    int cutCow = 1;
    int lastCow = arr[0];

    for (int i=1;i<n;i++){
        if(arr[i] - lastCow >= dist) {
            cutCow++;
            lastCow = arr[i];
        }
    }

    if(cutCow >= cows) {
        return true;
    } else {
        return false;
    }
    
}

int search(int arr[],int n,int target) {

    // sort(arr,arr+n);

    // for(int i=1;i<max_element(arr,arr+n) - min_element(arr,arr+n);i++) {
    //     if(checking(arr,n,i,target) == true) {
    //         return i;
    //     } else {
    //         return (i-1);
    //     }
    // }

    sort(arr,arr+n);

    int low = 1;
    int high = arr[n-1] - arr[0];
    int ans = 0;

    while (low <= high){
        int mid = low + (high - low) / 2;

        if(checking(arr,n,mid,target) == true) {
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
    
    int index = search(arr,n,target);

    cout << index;

    return 0;
}