#  Student Grade Evaluator (C++ Project)

![C++](https://img.shields.io/badge/Language-C++17-blue)
![Build](https://img.shields.io/badge/Build-Make%20%7C%20CMake-orange)
![Tests](https://img.shields.io/badge/Tests-GoogleTest-green)
![Platform](https://img.shields.io/badge/Platform-Linux-lightgrey)
![License](https://img.shields.io/badge/License-MIT-brightgreen)

---

##  Project Overview

**Student Grade Evaluator** is a modern **C++ application** that processes student marks from a CSV file, computes **total marks, averages, and final grades**, and exports the evaluated results in **CSV and JSON formats**. The project is designed using **object-oriented principles**, a **clean modular structure**, and supports **unit testing** using GoogleTest.

This project is ideal for demonstrating **C++ fundamentals, file handling, build systems (Make & CMake), and test-driven development basics**.

---

##  Key Features

* Object-Oriented Design using C++ classes
* CSV-based input for student marks
* Automatic calculation of:

  * Total marks
  * Average marks
  * Grade assignment
* Output export in **CSV** and **JSON** formats
* Makefile and CMake build support
* GoogleTest-based unit testing
* Clean, extensible project structure

---

##  Working Flow (How the Program Works)

### 1️ Program Start

* Application starts from `main.cpp`
* Input and output file paths are initialized

### 2️ Read Input Data

* Student data is read from `data/students.csv`
* Each row contains:

  * Student name
  * Marks for three subjects

### 3️ Object Creation

* For each student entry:

  * A `Student` object is created
  * Marks are stored internally

### 4️ Data Processing

* Total marks are calculated
* Average marks are computed
* Grade is assigned based on grading logic

### 5️ Output Generation

* Results are written to:

  * `data/results.csv`
  * `data/results.json`

### 6️ Program Exit

* Execution completes after successful export

---

##  Working Sequence

```text
Start Program
   ↓
Read CSV Input
   ↓
Create Student Objects
   ↓
Calculate Total & Average
   ↓
Assign Grade
   ↓
Export CSV & JSON
   ↓
End Program
```

---

##  Grade Evaluation Logic

| Average Score | Grade |
| ------------- | ----- |
| ≥ 90          | A     |
| ≥ 75          | B     |
| ≥ 60          | C     |
| ≥ 40          | D     |
| < 40          | F     |

---

##  Project Structure

```
student_grade_manager/
├── src/
│   ├── main.cpp
│   ├── student.h
│   ├── student.cpp
│   ├── file_handler.h
│   └── file_handler.cpp
│
├── tests/
│   └── test_student.cpp
│
├── data/
│   ├── students.csv
│   ├── results.csv
│   └── results.json
│
├── build/
├── Makefile
├── CMakeLists.txt
└── README.md
```

---

##  Requirements

### Software Requirements

* Linux (Ubuntu recommended)
* GCC / G++ (C++17 compatible)
* Make
* CMake (for tests)
* GoogleTest (optional, for unit testing)

Install basics on Ubuntu:

```bash
sudo apt update
sudo apt install -y build-essential cmake
```

---

##  Build & Run Instructions

### 🔹 Using Makefile (Recommended)

```bash
make        # Build the project
make run    # Run the application
make clean  # Clean build files
```

---

### 🔹 Using CMake (For Testing)

```bash
mkdir build && cd build
cmake ..
make
ctest
```

---

##  Sample Input (`students.csv`)

```
Alice,95,92,88
Bob,78,74,80
Charlie,60,65,62
David,45,42,40
Eve,25,30,20
```

---

## 📊 Sample Output (`results.json`)

```json
[
  {
    "name": "Alice",
    "total": 275,
    "average": 91.66,
    "grade": "A"
  }
]
```

---

##  Unit Testing

* Unit tests are located in the `tests/` directory
* Focus on validating:

  * Grade calculation logic
  * Average computation

Run tests using:

```bash
ctest
```

---

##  Future Enhancements

* Interactive CLI for managing students
* Exception handling & input validation
* JSON library integration (nlohmann/json)
* SQLite database backend
* REST API version (crow / cpp-httplib)
* Report generation (PDF / charts)

---

##  Learning Outcomes

* Object-Oriented Programming in C++
* File I/O and CSV parsing
* Build automation using Make & CMake
* Unit testing with GoogleTest
* Clean project structuring

---

##  License

This project is licensed under the **MIT License**.

---

## Description

> Developed a C++ student grade evaluation system using object-oriented design, CSV/JSON file handling, Make & CMake build automation, and GoogleTest-based unit testing.

---

⭐ If you find this project useful, please consider giving it a **star** on GitHub!
