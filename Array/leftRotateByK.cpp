//Left rotate the array by K places

#include<bits/stdc++.h>
using namespace std;

void leftRotateByK(int arr[],int n,int k) {
   vector<int> temp;
   int d = k;

    for (int i = 0; i < k; i++) {
        temp.push_back(arr[i]);
    }
  
    for (int i=k;i<n;i++){
        arr[i-d] = arr[i];
        k++;
    }

    int j = 0;
    for (int i=d+1;i<n;i++){
        arr[i] = temp[j];
        j++;
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

    int d;
    cout << "Enter the 'K': ";
    cin >> d;

    leftRotateByK(arr,n,d);

    for (int j=0;j<n;j++){
        cout << arr[j]  << " ";
    }
    

    return 0;
}