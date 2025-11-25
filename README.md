Student Grade Manager – Advanced C++ Project

The Student Grade Manager is an advanced C++ application designed to read student data from a CSV file, compute totals, averages, grades, and export results back into CSV and JSON formats.
This project demonstrates class-based design, file handling, modular structure, and includes support for optional GoogleTest unit testing.

🔧 Features
✔ Class-Based Design

A Student class encapsulates:

Marks

Total calculation

Average calculation

Grade determination

✔ Multiple Student Support

Reads multiple student records from data/students.csv.

✔ CSV File Input

Input file format:

Name Marks1 Marks2 Marks3

✔ CSV + JSON Output

After processing, results are saved into:

data/results.csv

data/results.json

✔ Clear Logical Implementation

Total = sum of marks

Average = Total / 3

Grade Mapping:

A → avg ≥ 90

B → avg ≥ 75

C → avg ≥ 60

D → avg ≥ 40

F → avg < 40

📂 Project Structure
student_grade_manager/
 ├── src/
 │    ├── main.cpp
 │    ├── student.h
 │    ├── student.cpp
 │    ├── file_handler.h
 │    └── file_handler.cpp
 ├── tests/
 │    └── test_student.cpp
 ├── data/
 │    └── students.csv
 ├── build/
 ├── Makefile
 ├── CMakeLists.txt
 └── README.md

🚀 Building & Running the Project
🔹 Using Makefile (Recommended)
Build the project
make

Run the project
make run

Clean build files
make clean

🧪 Unit Testing (GoogleTest)

Unit tests are located inside the tests/ directory.

Run tests using CMake:
ctest

📝 Example Input (students.csv)
Alice 95 92 88
Bob 78 74 80
Charlie 60 65 62
David 45 42 40
Eve 25 30 20

📤 Output Files
data/results.csv

Contains:

Name Total Average Grade

data/results.json

Example:

[
  {
    "name": "Alice",
    "total": 275,
    "average": 91.6,
    "grade": "A"
  }
]

🔮 Future Updates / Planned Enhancements
Feature	Description
Interactive CLI	Add menus to add, edit, delete students dynamically.
Enhanced JSON Support	Use modern JSON libraries such as nlohmann-json.
Exception Handling	Improve robustness for CSV reading errors or invalid entries.
SQLite Database Integration	Replace CSV with a small local database.
Web/API Interface	Convert project into a REST API using C++ frameworks.
Graphical Report Generation	Export PDF reports or charts for analysis.
Performance Profiling	Add benchmarks to measure speed and memory usage.
👨‍💻 Author

SEBASTIAN RAMESH S
Embedded Systems | C++ Developer | Linux/Yocto | Device Drivers
