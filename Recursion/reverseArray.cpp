// Reverse an Array

#include<bits/stdc++.h>
using namespace std;

void reverse(int i,int arr[],int n) {
    if(i >= n/2) {
        return;
    }

    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);
}

int main() {

    int x;
    cout << "Enter number: ";
    cin >> x;

    int arr[x];

    for (int i=0;i<x;i++){
        cin >> arr[i];
    }

    cout << "Before reversing an Array: ";
    for (int i=0;i<x;i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    reverse(0,arr,x);

    cout << "After reversing an Array: ";
    for (int i=0;i<x;i++){
        cout << arr[i] << " ";
    }

    return 0;
}