//Left rotate the array by One place 

#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;
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

    leftRotateByOne(arr,n);

    for (int j=0;j<n;j++){
        cout << arr[j]  << " ";
    }
    

    return 0;
}