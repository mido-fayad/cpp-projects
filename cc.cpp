#include <iostream>
using namespace std;
int main() {
    int number =0 , sum = 0;
    cout << "enter postive number \n";
    while (number >= 0) {
    cin >> number;
    sum +=number; // sum = sum + number;
    }
    cout << "sum of positive numbers "<< sum << "\n";
    return 0;
}
