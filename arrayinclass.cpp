#include <iostream>
#include <vector>

class Employee
{
public:
    Employee(int id, const std::string &name, int age)
        : id_(id), name_(name), age_(age) {}

    int getId() const
    {
        return id_;
    }

    const std::string &getName() const
    {
        return name_;
    }

    int getAge() const
    {
        return age_;
    }

    void display() const
    {
        std::cout << "Employee ID: " << id_ << ", Name: " << name_ << ", Age: " << age_ << std::endl;
    }

private:
    int id_;
    std::string name_;
    int age_;
};

int main()
{
    std::vector<Employee> employees;

    employees.push_back(Employee(1, "John Doe", 30));
    employees.push_back(Employee(2, "Jane Smith", 28));
    employees.push_back(Employee(3, "Alice Johnson", 35));

    for (const auto &employee : employees)
    {
        employee.display();
    }

    return 0;
}