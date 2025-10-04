#include <iostream>
using namespace std;
#include <string>

struct employee
{
    int eno;
    string ename;
    string job;
    float salary;
    float bonus;
    float total_salary;
};

void get_data (employee arr[] , int size );
void set_bonus (employee &e , float percent);
void print (employee arr[] , int size);
int main()
{
    employee emps [5];
    get_data(emps , 5);
    set_bonus(emps[1] , 0.10f);
    print (emps , 5);

}
void print (employee arr[] , int size)
{
for (int i = 0 ; i < size ; i++) 
{
arr[i].total_salary = arr[i].salary + arr[i].bonus ;        
cout << " employee no : " << arr[i].eno << endl;
cout << " employee name : " << arr[i].ename << endl;
cout << " employee job : " << arr[i].job << endl;
cout << " employee salary : " << arr[i].salary << endl;
cout << " employee bonus : " << arr[i].bonus << endl;
cout << " employee total salary : " << arr[i].total_salary << endl;
cout << "********************************" << endl;

}
}
void set_bonus (employee &e , float percent)
{
    e.bonus = e.salary * percent ;

}
void get_data (employee arr[] , int size)


{
    for (int i = 0 ; i < size ; i++)
{
 cout << " enter emloyee no , employee name , job \n";
 cin >> arr[i].eno >> arr[i].ename >> arr[i].job;
    
 if (arr[i]. job == "manager")
    arr[i]. salary = 5000;
 else if (arr[i]. job == "engineer")
    arr[i]. salary = 4000;
 else if (arr[i]. job == "clerk")
    arr[i]. salary = 3000;
 else
    arr[i]. salary = 2000;
}

}
