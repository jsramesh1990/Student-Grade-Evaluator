🎓 Student Grade Manager (C++ Project)

A modern C++ application that reads student marks from a CSV file, calculates totals, averages, and grades, and exports results in CSV & JSON formats.
Built with clean class-based design, modular structure, and optional GoogleTest unit testing.

✨ Features Overview
🧱 Object-Oriented Design

Student class handles:

Marks

Total calculation

Average calculation

Grade evaluation

📥 CSV Input

Reads students from:

data/students.csv


Format:

Name Marks1 Marks2 Marks3

📤 Exports Output

data/results.csv

data/results.json

➗ Grade Logic
Average	Grade
≥ 90	A
≥ 75	B
≥ 60	C
≥ 40	D
< 40	F
📁 Project Structure
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

⚙️ Build & Run
🛠 Using Makefile (Recommended)
Build:
make

Run:
make run

Clean:
make clean

🧪 Unit Testing with GoogleTest

Tests are inside:

tests/


Run using CMake:

ctest

📘 Sample Input (students.csv)
Alice 95 92 88
Bob 78 74 80
Charlie 60 65 62
David 45 42 40
Eve 25 30 20

📊 Output Example (results.json)
[
  {
    "name": "Alice",
    "total": 275,
    "average": 91.66,
    "grade": "A"
  }
]

🚀 Future Enhancements
🔹 Planned Features

Interactive CLI (add/edit/delete students)

JSON library support (nlohmann-json)

Exception handling improvements

SQLite database support

REST API version (crow / cpp-httplib)

PDF & chart report generation

Performance benchmark tests

👤 Author

SSR
Embedded Systems Developer • C++ • Linux/Yocto • Drivers
