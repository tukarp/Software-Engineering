#include <iostream>
#include "UniversitySubject.h"
#include "Student.h"

int main() {
    // Creating university subject
    // UniversitySubject parameters: name: string, description: string, ETCSPoints: float, lecturer: string, numberOfUnassistedWorkHours: int
    UniversitySubject universitySubject = UniversitySubject("Software Engineering",
                                                            "Software engineering is the systematic application of engineering approaches to the development of software.",
                                                            5.0,
                                                            "dr Eng. John Doe",
                                                            30);

    // Printing university subject
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------University Subject-----------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << universitySubject.getName() << endl;
    cout << "Description: " << universitySubject.getDescription() << endl;
    cout << "ETCS Points: " << universitySubject.getETCSPoints() << endl;
    cout << "Lecturer: " << universitySubject.getLecturer() << endl;
    cout << "Number of unassisted work hours: " << universitySubject.getNumberOfUnassistedWorkHours() << endl;

    // University subject methods
    universitySubject.printDescription();
    universitySubject.printLecturer();
    universitySubject.printNumberOfUnassistedWorkHours();

    // Creating student
    // Student parameters: name: string, surname: string, indexNumber: int, numberOfPassedSubjects: int, numberOfFailedSubjects: int
    Student student = Student("Mark", "Smith", 21, 4, 2);

    // Printing student
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Student-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << student.getFirstName() << endl;
    cout << "Surname: " << student.getLastName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Average: " << student.getAverage() << endl;
    cout << "Year of university: " << student.getYearOfUniversity() << endl;

    // Student methods
    student.doHomework();
    student.attendLecture();
    student.attendLaboratory();
}
