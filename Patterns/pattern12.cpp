// Pattern-12
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include<iostream> 
using namespace std;

int main() {

    int x;
    cout << "ENter any Number: ";
    cin >> x;
    int num = 1;

    for (int i=1;i<=x;i++){
        for (int j=1;j<=i;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
        
    }
    

    return 0;
}