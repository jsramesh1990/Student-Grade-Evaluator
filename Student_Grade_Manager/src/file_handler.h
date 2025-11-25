// file_handler.h
#pragma once
#include "student.h"
#include <vector>
#include <string>

namespace FileHandler {
    std::vector<Student> readCSV(const std::string& filename);
    void writeCSV(const std::string& filename, const std::vector<Student>& students);
    void exportJSON(const std::string& filename, const std::vector<Student>& students);
}

