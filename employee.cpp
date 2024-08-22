#include <windows.h>
#include <iostream>

using namespace std;

class employee
{
	int   emp_number;
	char  emp_name[20];
	float emp_basic;
	float emp_da;
	float emp_it;
	float emp_net_sal;

	public:

		void getData();
		float net_salary(float basic, float da, float it);
		void display();
};

void employee :: getData()
{
	cout<<"\nEnter employee number: ";
	cin>>emp_number;
	cout<<"\nEnter employee name: ";
	cin>>emp_name;
	cout<<"\nEnter employee basic: ";
	cin>>emp_basic;
	cout<<"\nEnter employee DA: ";
	cin>>emp_da;
	cout<<"\nEnter employee IT: ";
	cin>>emp_it;
}

float employee :: net_salary(float basic, float da, float it)
{
    return (basic+da)-it;
}

void employee :: display()
{
	cout<<"\n\n**** Details of  Employee ****";
	cout<<"\nEmployee Name      :  "<<emp_name;
	cout<<"\nEmployee number    :  "<<emp_number;
	cout<<"\nBasic salary       :  "<<emp_basic;
	cout<<"\nEmployee DA        :  "<<emp_da;
	cout<<"\nIncome Tax         :  "<<emp_it;
	cout<<"\nNet Salary         :  "<<net_salary(emp_basic, emp_da, emp_it);
	cout<<"\n-------------------------------\n\n";
}


int main()
{
    employee emp;
    
    emp.getData();
    emp.display();

    return 0;
}
