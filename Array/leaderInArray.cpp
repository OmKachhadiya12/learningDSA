//Leader in na array

#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n) {
    vector<int> ans;
    
    int maxRight = arr[n - 1];
    ans.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            ans.push_back(maxRight);
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
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

    vector<int> ans = leaders(arr,n);

    for (int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    

    return 0;
}