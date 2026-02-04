// Allocate Minimum Number of Pages.
 
#include<bits/stdc++.h> 
using namespace std;

int sum(int arr[],int n) {
    int ans = 0;
    for (int i=0;i<n;i++){
        ans = ans + arr[i];
    }

    return ans;
    
}

int checking(int arr[],int n,int mid) {
    int student = 1;
    long long pagesStudent = 0;
    for (int i=0;i<n;i++){
        if(pagesStudent + arr[i] <= mid) {
            pagesStudent += arr[i];
        } else {
            student++;
            pagesStudent = arr[i];
        }
    }
    
    return student;
}

int search(int arr[],int n,int students) {
    int low = *max_element(arr,arr+n);
    int high = sum(arr,n);

    while (low <= high){
        int mid = low + (high - low) / 2;

        int check = checking(arr,n,mid);
        if(check > students) {
            low = mid + 1;
        } else {
            high = mid -1;
        }
    }
  
    return low;
}

int main() {

    int n;
    cout << "How many Books: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Books pages: ";

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter the Students: ";
    cin >> target;
    
    int index = search(arr,n,target);

    cout << index;

    return 0;
}