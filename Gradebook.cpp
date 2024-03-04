#include <string>
#include <vector>
#include <iostream>
#include "Gradebook.hpp"

using namespace std;

Gradebook::Gradebook() {
    
    vector<Student> students;
    vector<Assignment> assignments;
    vector<vector<int> > grades;

}

void Gradebook::addStudent(string firstName, string lastName, string studentID) {

    students.push_back(Student(firstName, lastName, studentID));
    grades.push_back(vector<int>(assignments.size(), -1));

}

void Gradebook::addAssignment(string assignmentName, int totalPoints) {

    assignments.push_back(Assignment(assignmentName, totalPoints));

    for (int i = 0; i < grades.size(); i++) {
        grades[i].push_back(-1);
    }
    
}

int Gradebook::whichStudent(string studentID) {

    for (int i = 0; i < students.size(); i++) {
        if (students[i].studentID == studentID) {
            return i;
        }
    }
    
    return -1;
    
}

int Gradebook::whichAssignment(string assignmentName) {

    for (int i = 0; i < assignments.size(); i++) {
        if (assignments[i].assignmentName == assignmentName) {
            return i;
        }
    }
    
    return -1;

}

void Gradebook::addGrade(string studentID, string assignmentName, int grade) {

    int a = whichStudent(studentID);
    int b = whichAssignment(assignmentName);

    if (a == -1 || b == -1) {
        cout << "Invalid student ID or assignment." << endl;
        return;
     }

    else {
        grades[a][b] = grade;
    }
}

void Gradebook::report() {

    cout << "ID, " << "First Name, " << "Last Name";

    for (int i = 0; i < assignments.size(); i ++) {
        cout << ", " << assignments[i].assignmentName;
    }

    cout << endl;

    for (int i = 0; i < students.size(); i++) {
        cout << students[i].studentID << ", " << students[i].firstName << ", " << students[i].lastName;

        for (int j = 0; j < assignments.size(); j++) {
            if (grades[i][j] != -1) {
                cout << ", " << grades[i][j];
            } 
            else {
                cout << ", N/A";
            }
        }

        cout << endl;
    }
}