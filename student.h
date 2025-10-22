
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    int rollNo;
    float gpa;

public:
    void DefaultConstructor(); // using constructor here
    void ParameterizedConstructor(string n, int a, int r, float g);

    void Destructor(); // using destructor here

    void setName(string n);
    void setAge(int a);
    void setRollNo(int r);
    void setGPA(float g);

    string getName(); // using getter here
    int getAge();
    int getRollNo();
    float getGPA();
    
    void displayInfo();
    void calculateGrade();
};
