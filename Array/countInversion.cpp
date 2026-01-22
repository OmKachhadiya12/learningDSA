//Count Inversion.

#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    int count = 0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            count+= (mid - left + 1); 
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return count;
}


int mergesort(int arr[],int low,int high) {
    int count = 0;
    if (low >= high){
        return count;
    }

    int mid = low + (high - low) / 2;

    count+= mergesort(arr, low, mid);
    count+= mergesort(arr, mid + 1, high);

    count+= (arr, low, mid, high);
    return count;
}

int countInversion(int arr[],int n) {
    return mergesort(arr,0,n-1);
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

    int ans = countInversion(arr,n);

    cout << ans;
    
    return 0;
}     