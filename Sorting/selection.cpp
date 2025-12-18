//Selection sort

#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int n) {
    for (int i=0;i<n-1;i++){
        int min = i;
        for (int j=i+1;j<n;j++){
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        // int temp = arr[i];
        // arr[i] = arr[min];
        // arr[min] = temp;
        swap(arr[i],arr[min]);
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
    

    selection(arr,n);

    cout << endl << "After sorting: ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    

    return 0;
}