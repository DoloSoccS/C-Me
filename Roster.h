#pragma
#include <iostream>
#include <array>
#include "Degree.h"

class Roster {
public:
	Roster();
	~Roster();

	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	
	void parse(std::string sData[]);

	void remove(std::string studentID);

	void printAll();

	void printAverageDaysInCourse(std::string studentID);

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degreeProgram);
	
	int RosterIndex = -1;
	
private:
	Student *classRosterArray[5];

};
