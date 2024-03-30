#include <iostream>

using namespace std;

class Employee {
public:
    virtual double calculateSalary() const = 0;
};

class FullTimeEmployee : public Employee {
private:
    double salary;

public:
    FullTimeEmployee(double s) : salary(s) {}

    double calculateSalary() const override {
        return salary * 75; // Convert salary from dollars to rupees
    }
};

class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked * 75; // Convert salary from dollars to rupees
    }
};

class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(double base, double b) : baseSalary(base), bonus(b) {}

    double calculateSalary() const override {
        return (baseSalary + bonus) * 75; // Convert salary from dollars to rupees
    }
};

int main() {
    FullTimeEmployee fullTimeEmp(500);
    PartTimeEmployee partTimeEmp(16.8,30);
    Manager manager(3000, 4500);

    cout << "Full-Time Employee Salary: Rs." << fullTimeEmp.calculateSalary() << endl;
    cout << "Part-Time Employee Salary: Rs." << partTimeEmp.calculateSalary() << endl;
    cout << "Manager Salary: Rs." << manager.calculateSalary() << endl;

    return 0;
}
