// Pattern-15
// * * * * *
// *       *
// *       *
// * * * * * 

#include<iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter any Number:";
    cin >> x;

    for (int i=1;i<=x;i++){
        for (int j=1;j<=x;j++){
            if (i == 1 || j == 1 || i == x || j == x ){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
        
    }
    return 0;
}