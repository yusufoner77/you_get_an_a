# you_get_an_a

The purpose of this program is to implement a Gradebook class that will track grades for CSC 122. We should be able to take the following actions with this gradebook:

1) Add a new student to the class with the addStudent method. It will take arguments (string firstName, string lastName, string studentID).
2) Add a new assignment to the class with the addAssignment method. It will take arguments (string assignmentName, int totalPoints).
3) Give a student a grade for an assignment with the addGrade method. It will take arguments (string studentID, string assignmentName, int grade).
4) Print out a formatted report that shows all of the students and all of the grade information using the report method.

Notes:
- Any student who has not yet received a grade for a particular assignment will have an N/A in place of a grade
- If you try to add a grade for a student or assignment who does not exists, the program will display an error message and then terminate.

SET UP:
In order to run this program, you must be able to compile and run C++ programs on your machine.

To run the program: g++ main.cpp Gradebook.cpp Student.cpp Assignment.cpp && ./a.out