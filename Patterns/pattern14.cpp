// Pattern-14
// * * * * *
// * *   * *
// *       *
// * *   * *
// * * * * *

#include<iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter any Number: ";
    cin >> x;

    int inis = 0;

    for (int i=1;i<=x;i++){

        for (int j=1;j<=x-i;j++){
            cout << "*";
        }

        for (int j=1;j<=inis;j++){
            cout << " ";
        }

        for (int j=1;j<=x-i;j++){
            cout << "*";
        }

        inis += 2;

        cout << endl;     
    }

    return 0;
}