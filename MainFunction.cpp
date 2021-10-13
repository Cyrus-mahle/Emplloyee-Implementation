//Now lets test our functions
// this file is called Driver program
#include"Employee.h"// include class Employee
#include<iostream>
using namespace std;
int main(){
	//declaring object or variable employee1 with 
	// data type Employee
	Employee employee1("Solethu","Nonkondlo",2875);
	Employee employee2("Wanele","Bilana",3150);
	// monthly salary after increase of 10%
	double salIncrease1=employee2.getMonthlySalary()+
	(employee2.getMonthlySalary())*0.1;
	
	double salIncrease2=employee2.getMonthlySalary()+
	(employee2.getMonthlySalary())*0.1;
		// yearly salary after increase of 10%
	double salaryIncrease1=(employee1.getMonthlySalary())*12+
	((employee1.getMonthlySalary())*12)*0.1;
	
	double salaryIncrease2=(employee2.getMonthlySalary())*12+
	((employee2.getMonthlySalary())*12)*0.1;
	
	// now lets print employee 1 and 2
	cout<<"Employee 1"<<endl;
	cout<<"First Name : "<<employee1.getFirstName()<<endl;
	cout<<"Last Name  : "<<employee1.getLastName()<<endl;
	cout<<"Monthly Salary : "<<employee1.getMonthlySalary()<<endl;
	cout<<"Yearly Salary : "<<(employee1.getMonthlySalary())*12<<endl;
	cout<<endl;
	cout<<"Employee 2"<<endl;
	cout<<"First Name : "<<employee2.getFirstName()<<endl;
	cout<<"Last Name  : "<<employee2.getLastName()<<endl;
	cout<<"Monthly Salary : "<<employee2.getMonthlySalary()<<endl;
	cout<<"Yearly Salary : "<<(employee2.getMonthlySalary())*12<<endl;
	cout<<endl;
	// you can add other Employee up to n employee
	// now lets increase salary by 10%
	cout<<"10% salary increase"<<endl<<endl;
	cout<<"Employee 1"<<endl;
	cout<<"First Name : "<<employee1.getFirstName()<<endl;
	cout<<"Last Name  : "<<employee1.getLastName()<<endl;
	cout<<"Monthly Salary : "<<salIncrease1<<endl;
	cout<<"Yearly Salary : "<<salaryIncrease1<<endl;
	cout<<endl;
	cout<<"Employee 2"<<endl;
	cout<<"First Name : "<<employee2.getFirstName()<<endl;
	cout<<"Last Name  : "<<employee2.getLastName()<<endl;
	cout<<"Monthly Salary : "<<salIncrease2<<endl;
	cout<<"Yearly Salary : "<<salaryIncrease2<<endl;
	
	cout<<"Thank you dont miss my next Tutorial on inheritance"<<endl;
	cout<<"We will design Hospital system using Inheritance"<<endl;
	
	return 0;
}
