#include <iostream>
#include <vector>

using namespace std;

struct Course {
    string name;
    int credits;
    double grade;
};

int main() {
    int numCourses;
    double totalCredits = 0;
    double totalGradePoints = 0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<Course> courses(numCourses);

    for (int i = 0; i < numCourses; i++) {
        cout << "Enter course name: ";
        cin >> courses[i].name;
        cout << "Enter course credits: ";
        cin >> courses[i].credits;
        cout << "Enter course grade (out of 4.0): ";
        cin >> courses[i].grade;

        totalCredits += courses[i].credits;
        totalGradePoints += courses[i].credits * courses[i].grade;
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "Course Grades:" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << courses[i].name << ": " << courses[i].grade << endl;
    }

    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}

