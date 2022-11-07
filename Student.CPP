#include <iostream>
#include "Student.h"
#include <string>
using namespace std;


//cpp student class method definitions

//Constructor
Student::Student(){
	Student::student_ID = "";
	Student::first_name = "";
	Student::last_name = "";
	Student::email_address = "";
	Student::age = 0;
	Student::completion_days[0] = 0;
	Student::completion_days[1] = 0;
	Student::completion_days[2] = 0;
};

Student::Student(std::string new_id, std::string new_first, std::string new_last, std::string new_email, int new_age, int new_array[], DegreeProgram degreeprogram) {
	
	Student::student_ID = new_id;
	Student::first_name = new_first;
	Student::last_name = new_last;
	Student::email_address = new_email;
	Student::age = new_age;
	Student::completion_days[0] = new_array[0];
	Student::completion_days[1] = new_array[1];
	Student::completion_days[2] = new_array[2];
	Student::degree_program = degreeprogram;
	
}


//Getters and print() function
std::string Student::get_id() { return student_ID; }
std::string Student::get_first() { return first_name; }
std::string Student::get_last() { return last_name; }
std::string Student::get_email() { return email_address; }
int Student::get_age() { return age; }
int* Student::get_completion_days() { return completion_days; }
DegreeProgram Student::get_degree() { return degree_program; }






void Student::print() {

	std::cout << "Student ID is  " << get_id() << endl;
	std::cout << "First Name is  " << get_first() << endl;
	std::cout << "Last Name is  " << get_last() << endl;
	std::cout << "Email is  " << get_email() << endl;
	std::cout << "Age is  " << get_age() << endl;
	std::cout << "Days to Complete Course is  " << get_completion_days() << endl;
	std::cout << "Degree Program is  " << get_degree() << endl;
}







//Setters


void Student::set_id(std::string new_id) {
	Student::student_ID = new_id;
}

void Student::set_first(std::string new_first) {
	Student::first_name = new_first;
}

void Student::set_last(std::string new_last) {
	Student::last_name = new_last;
}

void Student::set_email(std::string new_email) {
	Student::email_address = new_email;
}

void Student::set_age(int new_age) {
	Student::age = new_age;
}

void Student::set_completion_days(int new_array[]) {
	Student::completion_days[0] = new_array[0];
	Student::completion_days[1] = new_array[1];
	Student::completion_days[2] = new_array[2];
}

void Student::set_degree(DegreeProgram new_program) {
	Student::degree_program = new_program;
}

