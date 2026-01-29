// Find the Smallest Divisor Given a Threshold. 
#include<bits/stdc++.h> 
using namespace std;

int checking(int arr[],int n,int threshold,int mid) {
    int ans = 0;
    for (int i=0;i<n;i++){
        ans = ans + (arr[i] + mid - 1) / mid;
        if(ans > threshold) {
            return 0;
        }
    }
    return 1;
    
}

int search(int arr[],int n,int threshold) {
    int low = 1;
    int high = *max_element(arr,arr+n);
    int ans = high;

    while (low <= high){
        int mid = low + (high - low) / 2;

        int check = checking(arr,n,threshold,mid);

        if(check == 1) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
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

    int threshold;
    cout << "Enter the threshold: ";
    cin >> threshold;

    int ans = search(arr,n,threshold);

    cout << ans;

    return 0;
}