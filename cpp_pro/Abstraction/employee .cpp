/* Employee Payroll Abstraction:
Create a C++ program that models an employee payroll system. 
Define an Employee class with attributes like name, ID, and salary.
Abstract the calculation of bonuses and display employee details.
​
Private name. ID, salary*/


#include<iostream>
#include<string.h>
using namespace std;

class Employee {
private:
    string name;
    int ID;
    double salary;

public:
    // Constructor to initialize employee details
    Employee(string empName, int empID, double empSalary) {
        name = empName;
        ID = empID;
        salary = empSalary;
    }

    // Method to calculate the bonus and update the salary
    void calculateBonus(double bonusPercentage) {
        double bonusAmount = salary * (bonusPercentage / 100);
        salary += bonusAmount;
    }

    // Method to display employee details
    void displayDetails() {
        cout << "\nEmployee Details:";
        cout << "\nName: " << name;
        cout << "\nID: " << ID;
        cout << "\nSalary: $" << salary << endl;
    }
};

int main() {
    Employee emp("SHIVAM GUPTA", 80431, 20000.0);

    // Display employee details before calculating the bonus
    cout << "Employee Details (Before Bonus):\n";
    emp.displayDetails();

    // Calculate and apply a 10% bonus to the employee's salary
    emp.calculateBonus(10.0);

    // Display employee details after calculating the bonus
    cout << "\nEmployee Details (After 10% Bonus):\n";
    emp.displayDetails();

    return 0;
}
