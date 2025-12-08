//Pattern-4
// 1
// 22
// 333
// 4444
// 55555

#include<iostream> 
using namespace std;

int main() {

    int x;
    cout << "Enter any number:";
    cin >> x;

    for(int i=0;i<x;i++) {
        for(int j=0;j<=i;j++) {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}