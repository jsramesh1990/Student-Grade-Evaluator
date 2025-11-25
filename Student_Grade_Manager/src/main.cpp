#include "student.h"
#include "file_handler.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Student> students = FileHandler::readCSV("data/students.csv");

    for (auto& s : students) {
        std::cout << s.getName() << " | Total: " << s.getTotal()
                  << " | Avg: " << s.getAverage()
                  << " | Grade: " << s.getGrade() << std::endl;
    }

    FileHandler::writeCSV("data/results.csv", students);
    FileHandler::exportJSON("data/results.json", students);

    std::cout << "\nResults exported to results.csv and results.json\n";
    return 0;
}

