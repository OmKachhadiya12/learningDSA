//Transformed Array.

#include<bits/stdc++.h>
using namespace std;

vector<int> search(int arr[],int n) {
    vector<int> result(n);

    for (int i = 0; i < n; i++) {
        int pos = i + arr[i];
        int newIndex = ((pos % n) + n) % n;
        result[i] = arr[newIndex];
    }

    return result;
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

    vector<int> result = search(arr,n);

    for(auto it : result) {
        cout << it << " ";
    }

    return 0;
}     