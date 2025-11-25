// file_handler.cpp
#include "file_handler.h"
#include <fstream>
#include <sstream>
#include <iostream>

namespace FileHandler {

std::vector<Student> readCSV(const std::string& filename) {
    std::vector<Student> students;
    std::ifstream file(filename);
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string name;
        float m1, m2, m3;
        if (ss >> name >> m1 >> m2 >> m3) {
            Student s(name, m1, m2, m3);
            s.calculate();
            students.push_back(s);
        }
    }
    return students;
}

void writeCSV(const std::string& filename, const std::vector<Student>& students) {
    std::ofstream file(filename);
    for (auto& s : students) {
        file << s.getName() << " "
             << s.getTotal() << " "
             << s.getAverage() << " "
             << s.getGrade() << "\n";
    }
}

void exportJSON(const std::string& filename, const std::vector<Student>& students) {
    std::ofstream file(filename);
    file << "[\n";
    for (size_t i = 0; i < students.size(); i++) {
        auto& s = students[i];
        file << "  {\n"
             << "    \"name\": \"" << s.getName() << "\",\n"
             << "    \"total\": " << s.getTotal() << ",\n"
             << "    \"average\": " << s.getAverage() << ",\n"
             << "    \"grade\": \"" << s.getGrade() << "\"\n"
             << "  }" << (i + 1 == students.size() ? "\n" : ",\n");
    }
    file << "]";
}

}

