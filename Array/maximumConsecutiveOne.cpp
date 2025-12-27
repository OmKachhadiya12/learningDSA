//Maximum Consecutive Ones.

#include<bits/stdc++.h>
using namespace std;

int consecutiveOnes(int arr[],int n) {
    int ones = 0;
    int maxi = 0;

    for (int i=0;i<n;i++){
        if(arr[i] == 1) {
            ones++;
            if(maxi < ones) {
                maxi = ones;
            }
        } else { 
            ones = 0;
        }
    }

    return maxi;
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
    
    int Ones = consecutiveOnes(arr,n);

    cout << Ones;
    

    return 0;
}