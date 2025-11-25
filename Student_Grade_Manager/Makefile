CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./src

SRC = src/main.cpp src/student.cpp src/file_handler.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = student_app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all run clean

