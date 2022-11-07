#include "Roster.h"
#include "Student.h"
#include "Degree.h"
#include <iostream>
#include <sstream>
#include <array>
#include <string>
using namespace std;



//pointer classRosterArray
Roster::Roster() {
   
}
Roster::~Roster() {
    for (int i = 0; i < RosterIndex; i++) {
        delete classRosterArray[i];
    }
    delete classRosterArray;
}

void Roster::parse(std::string sData[]) {
    std::array<string, 9> sString;
    for (int x = 0; x < 5; x++) {
        int currentCheck = 0;
        for (int i = 0; i < 9; i++) {
            int found = sData[x].find(",", currentCheck);
            sString[i] = sData[x].substr(currentCheck, found - currentCheck);
            std::cout << currentCheck << "  ";
            std::cout << found << "  ";
            std::cout << sString[i] << endl;
            currentCheck = found + 1;
        }
    }
}

void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    int daysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
    for (int i = 0; i < 5; i++) {
        classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeprogram);
    }
}

void Roster::remove(std::string studentID){
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->get_id() == studentID) {
            delete classRosterArray[i];
        }
        else {
            std::cout << "No student found with that ID." << endl << endl;
        }
    }
}

void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        classRosterArray[i]->print();
    }
}

void Roster::printAverageDaysInCourse(std::string studentID) {

    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->get_id() == studentID) {
            
            int averageDays = (classRosterArray[i]->completion_days[0] + classRosterArray[i]->completion_days[1] + classRosterArray[i]->completion_days[2]) / 3;
        std::cout << "Average days in course for " << classRosterArray[i]->first_name << " " << classRosterArray[i]->last_name << " is " << averageDays << endl;
        }

    }
}

void Roster::printInvalidEmails() {

    for (int i = 0; i < 1; i++) {
        std::string validateEmail = classRosterArray[i]->get_email();
        int atSymbol = validateEmail.find("@");
        int periodSymbol = validateEmail.find(".");
        int spaceFound = validateEmail.find(" ");
        if (atSymbol == -1 || periodSymbol == -1 || spaceFound != -1) {
            std::cout << "Invalid Email!" << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    std::cout << "The below belong to the following program: " << degreeProgram << endl;
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->get_degree() == degreeProgram) {
	    std::cout << "  " << classRosterArray[i]->student_ID << endl;

        }
    }
}
