/*( Employee Class) Create a class called Employee
that includes three pieces of information as data members—a first
name (type string ), a last name (type string ) and a monthly
salary (type int ). Your class should have a constructor that
initializes the three data members. Provide a set and a get
function for each data member. If the monthly salary is not
positive, set it to 0 . Write a test program that demonstrates
class Employee ’s capabilities. Create two Employee objects and
display each object’s yearly salary. Then give each
10 percent raise and display each Employee ’s again.(c++ how to program)*/
// class display name and salary

#include <iostream>
using namespace std ;
#include <string>
#include "employee-class.h"

int main (){
    employee employee1 (" Jane " , " Green " , -1000 ) ; //test constractur for not posrive salary .
    employee employee2(" John " , " Blue " , 10000 ) ;

    cout << employee1.getFirstName() << employee1.getLastName()<<"  " 
    << employee1.getMonthlySalary()<<"  "<<employee1.getYearlySalary() << endl ;
    cout << employee2.getFirstName() << employee2.getLastName()<<"  "
    << employee2.getMonthlySalary()<<"  "<<employee2.getYearlySalary() << endl<<endl ;
    
    int salary (0) ; 
    cout << " Enter new salary for Jane : " ;
    cin >> salary ;
    employee1.setMonthlySalary(salary) ;
    cout << " Enter new salary for John : " ;
    cin >> salary ;
    employee2.setMonthlySalary(salary) ;
    cout << employee1.getFirstName() << employee1.getLastName() 
    << employee1.getMonthlySalary()<<"  "<<employee1.getYearlySalary() << endl ;
    cout << employee2.getFirstName() << employee2.getLastName() 
    << employee2.getMonthlySalary()<<"  "<<employee2.getYearlySalary() << endl ;
    salary = (employee1.getMonthlySalary()/10) + employee1.getMonthlySalary();
    employee1.setMonthlySalary(salary) ;

    cout << "\n After raising 10% monthly for :"<<employee1.getFirstName()
    << employee1.getLastName() << employee1.getMonthlySalary() 
    << " yearly " << employee1.getYearlySalary() << endl;
    salary = (employee2.getMonthlySalary()/10)+employee2.getMonthlySalary() ;
    employee2.setMonthlySalary(salary) ;
    cout << " After raising 10% monthly for :" << employee2.getFirstName()
    << employee2.getLastName() << " Monthly " << employee2.getMonthlySalary()
    <<" yaerly "<< employee2.getYearlySalary() << endl;


}