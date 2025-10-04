#include <iostream>
using namespace std;
int main() {
    int grade=0 , sum =0;
    for (int i = 0; i<=6 ; i++) {
        cout << "enter grade \n";
        cin >> grade;
        sum += grade;

    }
    cout << "the average grade is" << sum/6 << "\n";
    return 0;

}