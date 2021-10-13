/*  

    Hello guys this Tutorial is about object oriented programming
	in c++ I will cover two pillars of object oriented programming
    *Astraction
    *Encapsulation
    
    *Abstraction refers to process of separating logical properties 
     of  data from its implementation.
     ,The user is interested on how to use the object works
     not how the object works 
     for example:
     if you were exposed to the programs that control your
     software you could have ruined them and crashed your 
     computer system by abstraction we want to avoid that
     
     To Demonstrate clearly I will design class Employee
     then seperate design of a class from its implementation
     I have already done this in my previous video but I have not
     explained clearly I only showed you how to create project
	 and seperate design from implementation
     
     *Encapsulation this is a process of combining variables
      and functions in a single entity called class
      for example:
      when I am designing my class
      my variables and functions declarations 
      will be grouped inside class called Employee
      
      What else is new to you?
      well default constructor, parametized constructor,destructor
      are new to you ,These are the functions that have the same name
      as class,they dont have return type
      
      *default and parametized constructor
       make sure that the variables are initialized
       -default constructor does not have any parameters
       -parametized constructor have parameters
      
      *destructor de-allocate or set the memory free
	   when the program goes out of the scope 
      
     
     ******************************************************
     *Code description: Employee  salary calculation      * 
     *Author: Nyakama Mahle  Cyrus                        *
     *Date: 03/10/2021                                    *
     ******************************************************
*/
/**********************<*******><********>********************************
Declare class Employee:

Declare private members
string variable firstName
string variable lastName
double variable monthlySalary 

declare public members:

Employee default constructor 
Employee(FirstName,LastName,MothlySalary)
Declare public members
void funtion setFirstName
void function setLastName
setMonthlySalary
double constant function getMonthlySalary
string constant function getFirstName
string constant function getLastName
Initialize private members with default constructor
Create an object in main function to call default constructor
monthlySalary = 0
firstName = " "
lastName = " "
call parametized constructor 

monthlySalary = MonthlySalary
Define get functions
getMonthlySalary
     return monthlySalary;
getFirstName
     return firstName
getLastName
     return lastName
Define main function
Declare variable employee1 with arguments
Solethu Nonkondlo 2875
Declare  variable employee2 with arguments
Wanele Bilana 3150

Monthly salary is equal to 2875 for Solethu Nonkondlo
Monthly salary is equal to 3150 for Wanele Bilana
Yearly salary is monthly salary multiplied by 12

Increase salary by 10% 
mothlySalary+10% of monthlySalary
YearlySalary + 10% of yearlysalary
*/
#include<iostream>
using namespace std;
//Encapsulation
class Employee{
	
   private://private access specifier
   //variables that are private cannot be accessed outside class 
   //directly
   string firstName;
   string lastName;
   double monthlySalary ;	
   public://private access specifier
   // since we cant access variables that are private 
   // we need to create public functions to access them
   Employee();//default constructor
   Employee(string,string,double);//parametized constructor
   //declare mutator functions,
   void setFirstName(string);
   void setLastName(string);
   void setMonthlySalary(double);
   //declare accessor functions,
   double getMonthlySalary()const;
   string getFirstName()const;
   string getLastName()const; 
};

  
