//Rearrange the elements of an array by the  Sign

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeElementBySign(int arr[],int n) {
    // int tempPos[n/2], tempNeg[n/2];
    // int j = 0,k = 0;

    // for (int i=0;i<n;i++){
    //     if(arr[i] > 0) {
    //         tempPos[j] = arr[i];
    //         j++;
    //     } else {
    //         tempNeg[k] = arr[i];
    //         k++;
    //     }
    // }

    // j = 0,k = 0;

    // for (int i=0;i<n;i++){
    //     if(i % 2 == 0) {
    //         arr[i] = tempPos[j];
    //         j++;
    //     } else {
    //         arr[i]  = tempNeg[k];
    //         k++;
    //     }
    // }
    
    vector<int> temp(n);
    int posIdx = 0,negIdx = 1;
    
    for(int i=0;i<n;i++) {
        if(arr[i] > 0) {
            temp[posIdx] = arr[i];
            posIdx+=2;
        } else {
            temp[negIdx] = arr[i];
            negIdx+=2;
        }
    }
    return temp;

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
    
    vector<int> temp = rearrangeElementBySign(arr,n);
    
    for (int i=0;i<n;i++){
        cout << temp[i] << " ";
    }

    return 0;
}