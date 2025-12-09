// Pattern-11
// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1

#include<iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter any number: ";
    cin >> x;

    for(int i=1;i<=x;i++) {
        for (int j=1;j<=i;j++){
            cout << j;
        }

        for (int j=1;j<=(2 * x) - (2 * i);j++){
            cout << " ";
        }
        

        for (int j=i;j>=1;j--){
            cout << j;
        }

        cout << endl;
        
    }

    return 0;
}