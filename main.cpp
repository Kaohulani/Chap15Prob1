#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeNumber;
    std::string hireDate;

public:
    // Constructors
    Employee() : name(""), employeeNumber(0), hireDate("") {}
    Employee(const std::string& empName, int empNumber, const std::string& date)
        : name(empName), employeeNumber(empNumber), hireDate(date) {}

    // Accessor functions
    std::string getName() const { return name; }
    int getEmployeeNumber() const { return employeeNumber; }
    std::string getHireDate() const { return hireDate; }

    // Mutator functions
    void setName(const std::string& empName) { name = empName; }
    void setEmployeeNumber(int empNumber) { employeeNumber = empNumber; }
    void setHireDate(const std::string& date) { hireDate = date; }
};

class ProductionWorker : public Employee {
private:
    int shift; // 1 for day shift, 2 for night shift
    double hourlyPayRate;

public:
    // Constructors
    ProductionWorker() : shift(1), hourlyPayRate(0.0) {}
    ProductionWorker(const std::string& empName, int empNumber, const std::string& date,
                     int workerShift, double payRate)
        : Employee(empName, empNumber, date), shift(workerShift), hourlyPayRate(payRate) {}

    // Accessor functions
    int getShift() const { return shift; }
    double getHourlyPayRate() const { return hourlyPayRate; }

    // Mutator functions
    void setShift(int workerShift) { shift = workerShift; }
    void setHourlyPayRate(double payRate) { hourlyPayRate = payRate; }
};

int main() {
    // Create a ProductionWorker object
    ProductionWorker worker("Kaohulani Palakiko", 557987, "2023-01-27", 1, 35.0);

    // Display the details of the ProductionWorker
    std::cout << "Name: " << worker.getName() << std::endl;
    std::cout << "Employee Number: " << worker.getEmployeeNumber() << std::endl;
    std::cout << "Hire Date: " << worker.getHireDate() << std::endl;
    std::cout << "Shift: " << (worker.getShift() == 1 ? "Day" : "Night") << std::endl;
    std::cout << "Hourly Pay Rate: $" << worker.getHourlyPayRate() << std::endl;

    return 0;
}
