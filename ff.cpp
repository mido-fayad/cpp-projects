#include <iostream>
using namespace std;
#include <cmath>
int sum ( int n1 , int n2 , int n3 );
float average ( int n1, int n2, int n3);
int main()
{
    int n1 , n2 , n3;
    cout << " enter 3 numbers \n";
    cin >> n1 >> n2 >> n3;
    cout << "sum is" << sum (n1 , n2 , n3) << endl;
    cout << " average is " << average (n1 , n2 , n3) << endl;

}
int sum ( int n1 , int n2 , int n3)
{
    return n1 + n2 + n3;
}
float average ( int n1 , int n2 , int n3)
{
    return sum (n1 , n2 , n3) / 3.0;
}