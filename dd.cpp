#include <iostream>
using namespace std;
#include <string>
int main() {
    int grade=100;
    cout << "enter your grade \n";
    cin >> grade;
    if (grade >= 50 && grade <=100) {
        cout << "your success \n";
    }
     else if (grade > 100) 
    {
        cout << "invalid grade\n";
    }
     else if (grade < 0) 
    {
        cout << "invalid grade\n";
    }
    else 
    {
        cout << "you failed\n";
    }
    return 0;
}