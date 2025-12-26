//Intersection of Two Sorted arrays.

#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionOfSorted(int arr1[],int arr2[],int n1,int n2) {
    int i = 0,j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2){
        if(arr1[i] == arr2[j]) {
            unionArr.push_back(arr1[i]);
            i++;
            j++;
        } else if(arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return unionArr;
    
} 

int main() {

    int n1;
    cout << "Enter size of an array 1: ";
    cin >> n1;
 
    int arr1[n1];

    cout << "Enter the elements of it: ";
    for (int i=0;i<n1;i++){
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter size of an array 2: ";
    cin >> n2;
 
    int arr2[n2];

    cout << "Enter the elements of it: ";
    for (int i=0;i<n2;i++){
        cin >> arr2[i];
    }

    vector<int> unionArr = intersectionOfSorted(arr1,arr2,n1,n2);

    for(auto it : unionArr) {
        cout << it << " ";
    }
 
    return 0;
}