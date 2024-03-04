#include "Gradebook.hpp"



int main() {
    Gradebook gradebook;

    // Add students
    gradebook.addStudent("John", "Doe", "abc123");
    gradebook.addStudent("Jane", "Smith", "def456");
    gradebook.addStudent("Yusuf", "Oner", "xyz789");

    // Add assignments
    gradebook.addAssignment("Homework 1", 10);
    gradebook.addAssignment("Test 1", 50);
    gradebook.addAssignment("Homework 2", 10);

    // Give grades
    gradebook.addGrade("abc123", "Homework 1", 8);
    gradebook.addGrade("abc123", "Test 1", 40);
    gradebook.addGrade("def456", "Homework 1", 9);
    gradebook.addGrade("def456", "Test 1", 45);

    // Print report
    gradebook.report();

    return 0;
}