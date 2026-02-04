// Split Array Largest Sum.
 
#include<bits/stdc++.h> 
using namespace std;

long long sum(int arr[],int n) {
    int ans = 0;
    for (int i=0;i<n;i++){
        ans = ans + arr[i];
    }

    return ans;
    
}

int checking(int arr[],int n,int mid) {
    int k = 1;
    long long sum = 0;
    for (int i=0;i<n;i++){
        if(sum + arr[i] <= mid) {
            sum += arr[i];
        } else {
            k++;
            sum = arr[i];
        }
    }

    return k;
    
}

int search(int arr[],int n,int k) {
    int low = *max_element(arr,arr+n);
    int high = sum(arr,n);

    while (low <= high){
        int mid = low + (high - low) / 2;
        int check = checking(arr,n,mid);

        if(check > k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    

    return low;
}

int main() {

    int n;
    cout << "Enter the Size: ";
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