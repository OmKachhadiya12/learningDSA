// Pattern-14
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *


#include<iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter any Number:" ;
    cin >> x;

    int upper = x / 2;
    int lower = x / 2;

    for (int i=1;i<=upper;i++){

        for (int j=1;j<=i;j++){
            cout << "*";
        }

        for (int j=1;j<=(2 * upper) - (2 * i);j++){
            cout << " ";
        }

        for (int j=1;j<=i;j++){
            cout << "*";
        }

        cout << endl;
        
    }

    for (int i=1;i<=lower;i++){
       
        for (int j=1;j<(lower-i+1);j++){
            cout << "*";
        }

        for (int j=1;j<=2*i;j++){
            cout << " ";   
        }
        
        for (int j=1;j<(lower-i+1);j++){
            cout << "*";
        }

        cout << endl;
        
    }
    

    return 0;
}