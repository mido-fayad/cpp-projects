#include <iostream>
using namespace std;
int main(){
    double width, length;
    cout <<"please enter rectangle width \n";
    cin >> width;

    cout <<"plrase enter rectangle length \n";
    cin >> length;

    double area = width * length;
    cout <<"the area of rectangle =" << area << endl;

    return 0;
}