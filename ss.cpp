#include <iostream>
using namespace std;
int main() {
 char marital , gender;
 int age;
 cout << "enter your mariyal status \n";
 cin >> marital;

 cout << "enter your gender \n";
 cin >> gender;

 cout << "enter your age \n";
 cin >> age;
 if (marital == 'm' || (marital== 's' && gender == 'm' && age >= 30) || (marital == 'S' && gender == 'f' && age >= 24))
    cout << "you will get insurance \n";
    else
    cout << "you will not get insurance \n";

    return 0;
}