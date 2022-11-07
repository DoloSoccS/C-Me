#include <iostream>
#include <ostream>
#include <string>
#include <array>
#include "Roster.h"
#include "Degree.h"
#include "Student.h"
using namespace std;


int main() {

	std::cout << "Scripting and Programming - Applications - C867\n";
	std::cout << "Written in  C++\n";
	std::cout << "010307407\n";
	std::cout << "DeShawn Houston\n\n\n";

	string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Anthony,Williams,awi1508@student.wgu.edu,31,21,31,45,SOFTWARE" };

	Roster *classRoster = new Roster();

	classRoster->parse(studentData);
}
