#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n) {
    for (int i=0;i<n;i++){
        int j = i;
         
        while(j>0 && arr[j-1] > arr[j]) {
            swap(arr[j-1],arr[j]);
            j--;
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

    insertion(arr,n);

    cout << endl << "After sorting: ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}