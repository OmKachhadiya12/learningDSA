#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n) {
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i+1;j++){
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
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

    bubble(arr,n);

    cout << endl << "After sorting: ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}