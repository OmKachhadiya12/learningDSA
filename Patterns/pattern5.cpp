//Pattern-5
// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter any Number:";
    cin >> x;

    for(int i=0;i<x;i++) {
        for(int j=0;j<(x-i+1);j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}