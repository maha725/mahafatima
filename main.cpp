#include "Student.h"

int main() {

    Student s1; // using default constructor
    s1.DefaultConstructor();
    s1.setName("Kamran");
    s1.setAge(20);
    s1.setRollNo(L1F4BSAI1234);
    s1.setGPA(3.6);
    s1.displayInfo();
    s1.calculateGrade();

    Student s2; // using parameterized constructor
    s2.ParameterizedConstructor("Ali", 21, 102, 3.1);
    s2.displayInfo();
    s2.calculateGrade();

    Student s3; //using parameterized constructor
    s3.ParameterizedConstructor("Emaan", 22, 103, 2.4);
    s3.displayInfo();
    s3.calculateGrade();

    s1.Destructor(); //  here manually calling destructor
    s2.Destructor();
    s3.Destructor();

    return 0;
}
