#include<bits/stdc++.h>
using namespace std;

int quicksort(int arr[],int low,int high) {
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j){
        while(arr[i] <= pivot && i <= high-1) {
            i++;
        }
        while(arr[j] > pivot && j >= low+1) {
            j--;
        }
        if(i < j) {
            swap(arr[i],arr[j]);
        }
         
    }
    swap(arr[low],arr[j]);
    return j;
}

void quick(int arr[],int low,int high) {
    if(low < high) {
        int partition = quicksort(arr,low,high);
        quick(arr,low,partition-1);
        quick(arr,partition+1,high);
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

    quick(arr,0,n-1);

    cout << endl << "After sorting: ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}