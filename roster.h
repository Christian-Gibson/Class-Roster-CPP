#pragma once

#ifndef ROSTER_H
#define ROSTER_H

#include <string>
#include "student.h"

using namespace std;

class Roster : public Student {



	public:

	
		Student* classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };

	

		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
				DegreeProgram studentDegree);
		void remove(string studentID);
		void printAll();
		void printAverageDaysInCourse(string studentID);
		void printInvalidEmails();
		void printByDegreeProgram(DegreeProgram studentDegree);

		
	

		static enum DegreeProgram strToDegree(string& inputStr);
	
		
		//Constructors
		Roster();
		Roster(Student rosterArray[5]);

		~Roster(); //Destructor
		











};

















#endif