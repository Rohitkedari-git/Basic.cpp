#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Employee {
private:
    int id;
    string name;
    double baseSalary;
    double hra;         
    double da;          
    double taxDeduction;
    double grossSalary;
    double netSalary;

public:
    // Getter function to access the ID from main()
    int getId() const {
        return id;
    }

    void getDetails(int count) {
        cout << "\n--- Enter Details for Employee #" << count << " ---" << endl;
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(); // Clear input buffer
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Base Monthly Salary ($): ";
        cin >> baseSalary;
        
        calculateSalary();
    }

    void calculateSalary() {
        hra = baseSalary * 0.15;        
        da = baseSalary * 0.10;         
        grossSalary = baseSalary + hra + da;
        
        if (grossSalary > 5000) {
            taxDeduction = grossSalary * 0.12; 
        } else {
            taxDeduction = grossSalary * 0.05;  
        }
        
        netSalary = grossSalary - taxDeduction;
    }

    void displaySalarySlip() const {
        cout << "\n========================================" << endl;
        cout << "             SALARY SLIP                " << endl;
        cout << "========================================" << endl;
        cout << left << setw(20) << "Employee ID:" << id << endl;
        cout << left << setw(20) << "Employee Name:" << name << endl;
        cout << "----------------------------------------" << endl;
        cout << fixed << setprecision(2);
        cout << left << setw(20) << "Base Salary:" << "$" << baseSalary << endl;
        cout << left << setw(20) << "HRA (15%):" << "$" << hra << endl;
        cout << left << setw(20) << "DA (10%):" << "$" << da << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "GROSS SALARY:" << "$" << grossSalary << endl;
        cout << left << setw(20) << "Tax Deduction:" << "-$" << taxDeduction << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "NET TAKE-HOME:" << "$" << netSalary << endl;
        cout << "========================================" << endl;
    }
};

int main() {
    int totalEmployees;

    cout << "--- Employee Salary Management System ---" << endl;
    cout << "How many employees do you want to add? ";
    cin >> totalEmployees;

    if (totalEmployees <= 0) {
        cout << "Invalid number of employees. Exiting program." << endl;
        return 1;
    }

    // Allocate memory for the total employees requested
    vector<Employee> employeeList(totalEmployees);

    // Step 1: Collect information for all employees
    for (int i = 0; i < totalEmployees; i++) {
        employeeList[i].getDetails(i + 1);
    }

    // Step 2: Search and display only the chosen employee's slip
    int searchId;
    cout << "\nAll employee profiles created successfully!" << endl;
    cout << "Enter the Employee ID of the salary slip you want to view: ";
    cin >> searchId;

    bool found = false;
    for (int i = 0; i < totalEmployees; i++) {
        if (employeeList[i].getId() == searchId) {
            employeeList[i].displaySalarySlip();
            found = true;
            break; // Stop looking once found
        }
    }

    if (!found) {
        cout << "\nError: Employee ID " << searchId << " not found in the system." << endl;
    }

    return 0;
}
