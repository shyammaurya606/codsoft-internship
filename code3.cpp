#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<string> studentNames;
    vector<double> studentGrades;

    // Input student names and grades
    for (int i = 0; i < numStudents; i++) {
        string name;
        double grade;
        
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;
        studentNames.push_back(name);

        cout << "Enter the grade for " << name << ": ";
        cin >> grade;
        studentGrades.push_back(grade);
    }

    if (numStudents == 0) {
        cout << "No students to calculate grades for." << endl;
        return 1;
    }

    // Calculate average grade, highest grade, and lowest grade
    double sumGrades = 0;
    double highestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];

    for (double grade : studentGrades) {
        sumGrades += grade;

        if (grade > highestGrade) {
            highestGrade = grade;
        }

        if (grade < lowestGrade) {
            lowestGrade = grade;
        }
    }

    double averageGrade = sumGrades / numStudents;

    // Display results
    cout << "\nStudent Grades Summary:\n";
    cout << "-----------------------\n";
    cout << "Average Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
