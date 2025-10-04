#include <iostream>
using namespace std;
#include <cmath>
int larger (int num1, int num2);
int main()
{
    int n1 , n2 ;
    cout << "enter 2 numbers \n";
    cin >> n1 >> n2 ;
    cout << " the larger number is " << larger (n1 , n2) << endl ;
 // int result = larger (n1 , n2) ;
 // cout << " the larger number is " << result << endl ;

}
int larger (int num1 , int num2)
{
 // int max ;
    if (num1 >= num2)

    return num1 ;
 else
    return  num2 ;
 // return max ;
}