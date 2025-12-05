#include<iostream>
using namespace std;

//9.Function
int addition(int x, int y) {
    int sum = x + y;
    return sum;
}

int main() {

    //1.Input/Output 
    int number;
    cout << "Enter your lucky number:";
    cin >> number;
    cout << "Hey there!! your number is:" << number;

    //2.Condition statements 
    int age;
    cout << "Enter your age to check out you are an Adult or out?";
    cin >> age;

    if(age >= 18) {
        cout << "You are an adult.";
    }
    else {
        cout << "You aren't an adult.";
    }

    //3.Switch Statement 
    int day;
    cout << "Enter any number between 1 to 7: ";
    cin >> day;

    //4.Array
    int arr[5];
    cout << "Enter the elements in the array:";

    cin >> arr[0] >>  arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[4];

    cout << arr[2];

    //5.String 
    string s = "Kachhadiya";
    int len  = s.size();

    cout << s[len-1];

    //6.For loop
    for(int i=1; i<=10; i++) {
        cout << "om" << "\n";
    }

    //7.While loop
    int i = 1; 
    while (i<=10){

        cout << "om" << endl;
        i++; 
    }

    //8.Do-While loop
    int i = 1;
    do{
        cout << "om" << endl;
        i++;
    }while(i<=5);

    //9.Function
    int a,b;
    cout << "Enter any two number to do addition: ";
    cin >> a >> b;
    int sum = addition(a,b);
    cout << "The addition is " << sum;

    return 0;
}

