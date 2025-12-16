#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[n] = {0};
    for (int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    

    int x;
    cin >> x;
    while (x--){
        int q;
        cin >> q;
        cout << hash[q] << endl;
    }
    
    

    return 0;
}