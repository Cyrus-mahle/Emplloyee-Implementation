//Abstraction now we write the implementation of class
//Employee in sepetaye file 
#include"Employee.h"// include class Employee
#include<iostream>
using namespace std;
//definition of default constructor
Employee::Employee(){
	firstName="";
	lastName="";
	monthlySalary=0.0;
}
//definition of parametized constructor
Employee::Employee(string FirstName,string LastName,double MonthlySalary){
	firstName=FirstName;
	lastName=LastName;
	monthlySalary=MonthlySalary;
}
//define mutator functions 
void Employee::setFirstName(string FirstName){
	firstName=FirstName;
}
void Employee::setLastName(string LastName){
	lastName=LastName;
}
void Employee::setMonthlySalary(double MonthlySalary){
	
	monthlySalary=MonthlySalary;
}
//define accessor functions
double Employee::getMonthlySalary()const{
   return monthlySalary;
}
string Employee::getFirstName()const{
   return firstName;
}
string Employee::getLastName()const{
   return lastName;
}

