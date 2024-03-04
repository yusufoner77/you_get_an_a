#include <string>
#include <vector>
#include "Student.hpp"
#include "Assignment.hpp"
using namespace std;

class Gradebook {

private:

    vector<Student> students;
    vector<Assignment> assignments;
    vector<std::vector<int> > grades;

public:
    Gradebook();

    int whichStudent(string studentID);
    int whichAssignment(string assignmentName); 
    void addStudent(string firstName, string lastName, string studentID);
    void addAssignment(string assignmentName, int totalPoints);
    void addGrade(string studentID, string assignmentName, int grade);
    void report();

};