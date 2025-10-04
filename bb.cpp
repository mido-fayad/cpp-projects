#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "enter any integer number \n";
    cin >> number;
    if ( number % 2 == 0) {
        cout << "the number is even \n";
    }
    else {
        cout << "the number is odd \n";
    }

    return 0;
}