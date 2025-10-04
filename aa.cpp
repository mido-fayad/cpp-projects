#include <iostream>
using namespace std;
int main() {

int counter = 1 ,grade = 0 ,sum = 0;
while (counter <=6){
    cout << "enter your grade \n";
    cin >> grade;
    sum += grade;
    counter++;

}
cout << "averge grade = " << sum/6 << "\n";
return 0;


}