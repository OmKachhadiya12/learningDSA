//Next Permutation

#include<bits/stdc++.h>
using namespace std;

vector<int> nextPair(vector<int> arr,int n) {
    // next_permutation(arr.begin(),arr.end());
    // return arr;

    int n = arr.size();
        int index = -1;

        // Step 1: Find the break point
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                index = i;
                break;
            }
        }

        // If no break point found
        if (index == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }

        // Step 2: Find element just greater than arr[index]
        for (int i = n - 1; i > index; i--) {
            if (arr[i] > arr[index]) {
                swap(arr[i], arr[index]);
                break;
            }
        }

        // Step 3: Reverse the right part
        reverse(arr.begin() + index + 1, arr.end());
}

int main() {

    int n;
    cout << "Enter size of an array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of it: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    vector<int> nextPairr = nextPair(arr,n);

    for (int i=0;i<n;i++){
        cout << nextPairr[i] << " ";
    }
    
  
    return 0;
}