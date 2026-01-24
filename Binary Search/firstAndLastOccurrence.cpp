//First and Last Occurrences.

#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[],int n,int target) {
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

int upperBound(int arr[],int n,int target) {
    int ans = n;
    int low = 0;
    int high = n - 1;

    while (low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] > target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        } 
    }
    
    return ans;

} 

vector<int> firstLastOccurrence(int arr[],int n,int target){
   int lb = lowerBound(arr,n,target);

   if(lb == n || arr[lb] != target) {
    return {-1,-1};
   } 
   return {lb,upperBound(arr,n,target) - 1};
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

    vector<int> ans = firstLastOccurrence(arr,n,target);

    for(auto i : ans) {
        cout << i << " "; 
    }
    
    return 0;
}