//Pattern-3
// 1
// 12
// 123
// 1234
// 12345

#include<iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter a number:";
    cin >> x;

    for (int  i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    

    return 0;
}