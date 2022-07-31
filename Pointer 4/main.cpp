#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void incrementSalary(double *current_salary, double percentage_increment) {
    double increment_value = (*current_salary) * (percentage_increment / 100.0);
    *current_salary = *current_salary + increment_value;
}

int main() {
	cout<<"Hello There!\n";
    double *salary, salary2, hike = 5.0;
    *salary = 1000.0;	// pointer variable
	salary2 = 1200.0;	// normal variable
	cout<<"current salary = "<<*salary<<endl;

    incrementSalary(salary, hike);
    cout<<"Salary after "<< hike<<" hike = "<< *salary<<endl;
	
	incrementSalary(&salary2, hike); // address of salary2
	cout<<"Salary after "<< hike<<" hike = "<< salary2<<endl;
	system("pause");
	return 0;
}