#pragma once
#include <iostream>
#include <string>
#include "Degree.h"


//Class Creation with attributes
class Student {
public:


	std::string student_ID;
	std::string first_name;
	std::string last_name;
	std::string email_address;
	int age;
	int completion_days[3];
	DegreeProgram degree_program;



	Student();
	Student(std::string new_ID, std::string new_first, std::string new_last, std::string new_email, int new_age, int new_array[], DegreeProgram degreeprogram);
	//Class function declarations


	std::string get_id();
	std::string get_first();
	std::string get_last();
	std::string get_email();
	int get_age();
	int* get_completion_days();
	DegreeProgram get_degree();




	void print();







	void set_id(std::string new_id);
	void set_first(std::string new_first);
	void set_last(std::string new_last);
	void set_email(std::string new_email);
	void set_age(int new_age);
	void set_completion_days(int new_array[]);
	void set_degree(DegreeProgram new_program);
};
