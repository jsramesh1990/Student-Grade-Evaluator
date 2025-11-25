// student.cpp
#include "student.h"

Student::Student(const std::string& n, float m1, float m2, float m3) 
    : name(n), marks{m1, m2, m3}, total(0), average(0), grade('F') {}

void Student::calculate() {
    total = marks[0] + marks[1] + marks[2];
    average = total / 3.0;

    if (average >= 90) grade = 'A';
    else if (average >= 75) grade = 'B';
    else if (average >= 60) grade = 'C';
    else if (average >= 40) grade = 'D';
    else grade = 'F';
}

std::string Student::getName() const { return name; }
float Student::getTotal() const { return total; }
float Student::getAverage() const { return average; }
char Student::getGrade() const { return grade; }

