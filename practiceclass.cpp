#include <iostream>
#include <windows.h>
using namespace std;
class Employee
{
public:
    int id, age;
    char name[50];
    float net, da, it, bs;

    void getdata();
    float net_salary(float b, float d, float i);
    void display();
};

void Employee::getdata()
{
    cout << "Enter your ID  : ";
    cin >> id;
    cout << "\nEnter Name   : ";
    cin >> name;
    cout << "\nEnter Age    : ";
    cin >> age;
    cout << "\nBasic Salary : ";
    cin >> bs;
    cout << "\nEnter DA     : ";
    cin >> da;
    cout << "\nEnter IT     : ";
    cin >> it;
}

float Employee::net_salary(float b, float d, float i)
{
    return (b + d) - i;
}
void Employee::display()
{
    cout << "\n\n**** Details of  Employee ****";
    cout << "\nEmployee Name      :  " << name;
    cout << "\nEmployee Number    :  " << id;
    cout << "\nEmployee Age       :  " << age;
    cout << "\nBasic salary       :  " << bs;
    cout << "\nEmployee DA        :  " << da;
    cout << "\nIncome Tax         :  " << it;
    cout << "\nNet Salary         :  " << net_salary(bs, da, it);
    cout << "\n-------------------------------\n\n";
}
int main()
{
    Employee emp;

    emp.getdata();
    emp.display();

    return 0;
}