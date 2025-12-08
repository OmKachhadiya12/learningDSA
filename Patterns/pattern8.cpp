// Pattern-7
// *****
//  ***
//   *

#include<iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter any Number:";
    cin >> x;
    
    for (int i=1;i<=x;i++){
          
        for (int j=1;j<=i-1;j++){
            cout << " ";
        }
        for (int j=1;j<=(2 * x) -(2*i-1);j++){
            cout << "*";
        }
      
        
        cout << endl;
    }
    
    
    return 0;
}