// test_student.cpp
#include "student.h"
#include <gtest/gtest.h>

TEST(StudentTest, GradeCalculation) {
    Student s1("Alice", 95, 92, 88);
    s1.calculate();
    EXPECT_EQ(s1.getGrade(), 'A');

    Student s2("Bob", 78, 74, 80);
    s2.calculate();
    EXPECT_EQ(s2.getGrade(), 'B');

    Student s3("Eve", 25, 30, 20);
    s3.calculate();
    EXPECT_EQ(s3.getGrade(), 'F');
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

