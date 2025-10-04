#include <iostream>
using namespace std;
int main() {
    int grade;
    cout << "enter your grade \n";
    cin >> grade;
    if (grade >= 60) {
        cout << "your success \n";
    }
     else if (grade < 60) 
    {
        cout << "your failed \n";
    }
    else {
        cout << "invalid grade \n";
    }
    return 0;
}