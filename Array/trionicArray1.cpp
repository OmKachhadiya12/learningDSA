// Trionic Array One.

#include<bits/stdc++.h>
using namespace std;

bool checking(int arr[],int n) {
    if (n < 4) return false;

    int i = 1;

    if (arr[i] <= arr[i-1]) return false;
    while (i < n && arr[i] > arr[i-1]) i++;

    if (i == n || arr[i] >= arr[i-1]) return false;
    while (i < n && arr[i] < arr[i-1]) i++;

    if (i == n || arr[i] <= arr[i-1]) return false;
    while (i < n && arr[i] > arr[i-1]) i++;

    return i == n;
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

    bool check = checking(arr,n);

    cout << check;
    

    return 0;
}