#include <iostream>
using namespace std;
#include <cmath>
float area (int radius);
float vlume (int radius);
int main()
{
    int radius;
    cout << " please inter the sphere radius \n";
    cin >> radius;
    cout << " the sphere area is " << area(radius) << endl;
    cout << " the sphere vlume is" << vlume(radius) << endl;

}
float area (int radius)
{
    return 4 * 3.14 * radius * radius;
}
float vlume (int radius)
{
    return 3/4 * 3.14 * radius * radius * radius;

}
