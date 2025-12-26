// Moves Zero's to the end of an Array

#include<bits/stdc++.h>
using namespace std;

void movesZeros(int arr[],int n) {
    int j = -1;

    for (int i=1;i<n;i++){
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    for (int i=j+1;i<n;i++){
        if(arr[i] != 0) {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
    
    return;
    
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

    movesZeros(arr,n);

    for (int j=0;j<n;j++){
        cout << arr[j]  << " ";
    }

    return 0;
}