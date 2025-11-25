// student.h
#pragma once
#include <string>

class Student {
private:
    std::string name;
    float marks[3];
    float total;
    float average;
    char grade;

public:
    Student(const std::string& n, float m1, float m2, float m3);

    void calculate();
    std::string getName() const;
    float getTotal() const;
    float getAverage() const;
    char getGrade() const;
};

