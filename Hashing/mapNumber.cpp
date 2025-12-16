#include<bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin >> x;
    int arr[x];

    for (int i=0;i<x;i++){
        cin >> arr[i];
    }

    map<int,int> mpp;
    for (int i=0;i<x;i++){
        mpp[arr[i]]++;
    }
    

    int q;
    cin >> q;
    while (q--){
        int n;
        cin >> n;
        cout << mpp[n] << endl;
    }
    
    

    return 0;
}