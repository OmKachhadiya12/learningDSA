#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int n) {
    
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

    cout << "Before sorting: ";   
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    merge(arr,n);

    cout << endl << "After sorting: ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}