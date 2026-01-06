//Next Permutation

#include<bits/stdc++.h>
using namespace std;

vector<int> nextPair(vector<int> arr,int n) {
    next_permutation(arr.begin(),arr.end());
    return arr;
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