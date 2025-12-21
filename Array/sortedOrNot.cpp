//Sorted or Not

#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n) {

    for (int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
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

    bool isSorted = sorted(arr,n);
    
    cout << isSorted;

    return 0;
}