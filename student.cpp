#include "Student.h"

// used default constructor here
void Student::DefaultConstructor() {
    name = "Unknown";
    age = 0;
    rollNo = 0;
    gpa = 0.0;
    cout << "Default constructor called." << endl;
}

// used parameterized constructor here
void Student::ParameterizedConstructor(string n, int a, int r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
    cout << "Parameterized constructor called for " << name << endl;
}

// using destructor here
void Student::Destructor() {
    cout << "Destructor called for " << name << endl;
}

void Student::setName(string n) { name = n; } // Setter methods
void Student::setAge(int a) { age = a; }
void Student::setRollNo(int r) { rollNo = r; }
void Student::setGPA(float g) { gpa = g; }

string Student::getName() { return name; } // Getter methods
int Student::getAge() { return age; }
int Student::getRollNo() { return rollNo; }
float Student::getGPA() { return gpa; }

void Student::displayInfo() {
    cout << "----------------------------------" << endl;
    cout << "Name: " << name
         << " | Age: " << age
         << " | Roll No: " << rollNo
         << " | GPA: " << gpa << endl;
}
// Function to calculate grade
void Student::calculateGrade() {
    cout << "Grade for " << name << ": ";
    if (gpa >= 3.5)
        cout << "A" << endl;
    else if (gpa >= 3.0)
        cout << "B" << endl;
    else if (gpa >= 2.0)
        cout << "C" << endl;
    else
        cout << "F" << endl;
}
