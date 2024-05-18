#include <iostream>

#include "UniversitySubject.h"
#include "Student.h"

using namespace std;

int main() {
    // University subject
    string universitySubjectName = "Software Engineering";
    string universitySubjectDescription = "Software engineering is the systematic application of engineering approaches to the development of software.";
    float universitySubjectETCSPoints = 5.0;
    string universitySubjectLecturer = "dr Eng. John Doe";
    int universitySubjectNumberOfUnassistedWorkHours = 30;
    UniversitySubject universitySubject = UniversitySubject(
        universitySubjectName,
        universitySubjectDescription,
        universitySubjectETCSPoints,
        universitySubjectLecturer,
        universitySubjectNumberOfUnassistedWorkHours
    );

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------University Subject-----------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << universitySubject.getName() << endl;
    cout << "Description: " << universitySubject.getDescription() << endl;
    cout << "ETCS Points: " << universitySubject.getETCSPoints() << endl;
    cout << "Lecturer: " << universitySubject.getLecturer() << endl;
    cout << "Number of unassisted work hours: " << universitySubject.getNumberOfUnassistedWorkHours() << endl;

    universitySubject.printDescription();
    universitySubject.printLecturer();
    universitySubject.printNumberOfUnassistedWorkHours();

    // Student
    string studentName = "Mark";
    string studentSurname = "Smith";
    int studentIndexNumber = 21;
    int studentNumberOfPassedSubjects = 4;
    int studentNumberOfFailedSubjects = 2;
    Student student = Student(
        studentName,
        studentSurname,
        studentIndexNumber,
        studentNumberOfPassedSubjects,
        studentNumberOfFailedSubjects
    );

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Student-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << student.getFirstName() << endl;
    cout << "Surname: " << student.getLastName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Average: " << student.getAverage() << endl;
    cout << "Year of university: " << student.getYearOfUniversity() << endl;

    student.doHomework();
    student.attendLecture();
    student.attendLaboratory();
}
