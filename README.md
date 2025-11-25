Student Grade Manager – Advanced C++ Project

This project demonstrates an advanced C++ grade management system that reads student marks from a CSV file, computes totals, averages, and grades, and exports results into CSV and JSON formats.
It includes class-based design, file handling, and optional unit testing support.

🔧 Features
✔ Class-Based Design

Student class handles marks, calculations, and grade logic.

✔ Multiple Student Support

All students are loaded from data/students.csv.

✔ CSV File Input

Each line in students.csv contains:
Name Marks1 Marks2 Marks3

✔ CSV + JSON Output

Saves computed results into:

data/results.csv

data/results.json

✔ Clear Logical Implementation

Total = sum of 3 marks

Average = Total / 3

Grade Logic:

A ≥ 90

B ≥ 75

C ≥ 60

D ≥ 40

F < 40

📂 Project Structure
student_grade_manager/
 ├── src/
 ├── tests/
 ├── data/
 │    └── students.csv
 ├── build/
 ├── Makefile
 ├── CMakeLists.txt
 └── README.md

🚀 Building & Running the Project
Using Makefile (recommended)
Build:
make

Run:
make run

Clean:
make clean

🧪 Unit Testing (GoogleTest)

Tests live inside tests/.

Run using:

ctest


(if using CMake)

🔮 Future Updates / Planned Enhancements
Feature	Description
Interactive CLI	Add menu to add/edit/delete students dynamically.
Enhanced JSON Support	Use a JSON library (e.g., nlohmann-json).
Exception Handling	Better validation for bad inputs and bad CSV format.
Database Integration (SQLite)	Store all student info in a local DB.
Web Interface	Convert the system into a REST API using C++ (crow/boost).
Graphical Report Generation	Export PDF reports with charts and analysis.
Performance Profiling	Add benchmark tests to analyze speed/memory.
