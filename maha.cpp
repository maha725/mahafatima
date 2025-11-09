#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float salary;
    string companyName;
    const string department;

public:
    // Constructor 
    Employee(string n, int i, float s, string dept = "Tech Dept")
        : name(n), id(i), salary(s), companyName("TechSolutions"), department(dept) {
    }

    // Copy Constructor
    Employee(const Employee& e)
        : name(e.name), id(e.id), salary(e.salary),
        companyName(e.companyName), department(e.department) {
    }

    // Destructor
    ~Employee() {
        cout << "\nEmployee " << name << " record deleted.\n";
    }

    // Function to display employee details
    void display() const {
        cout << "\nCompany: " << companyName;
        cout << "\nDepartment: " << department;
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary << endl;
    }

    // Function to change employee name
    void changeName(string newName) {
        name = newName;
    }

    // Compare salaries (object as argument)
    void compareSalary(const Employee& e) const {
        cout << "\nComparing salaries of " << name << " and " << e.name << ":\n";
        if (salary > e.salary)
            cout << name << " has higher salary.\n";
        else if (salary < e.salary)
            cout << e.name << " has higher salary.\n";
        else
            cout << "Both salaries are equal.\n";
    }

    // Return object from function
    Employee returnCopy() {
        return *this;
    }
};

int main() {
    cout << "=== TechSolutions Employee System ===\n";

    Employee e1("Maha ", 101, 55000);
    Employee e2("fatima", 102, 60000);

    e1.display();
    e2.display();
    Employee e3 = e1;
    cout << "\nChanging e1 name to test copy...\n";
    e1.changeName("maha");

    cout << "\nOriginal Employee (e1):";
    e1.display();

    cout << "\nCopied Employee (e3):";
    e3.display();

    // Compare salaries
    e1.compareSalary(e2);

    // Return object example
    Employee e4 = e2.returnCopy();
    cout << "\nReturned Employee (e4):";
    e4.display();

    cout << "\nProgram ended successfully.\n";
    return 0;
}
