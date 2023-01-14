#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"

using namespace std;


class Student {

	private:
		//Data Members
		string StudentID;
		string FirstName;
		string LastName;
		string EmailAddress;
		int Age;
		int DaysToComplete[3];
		DegreeProgram StudentDegree;

	public:
		//Getters
		string getStudentID();
		string getFirstName();
		string getLastName();
		string getEmailAddress();
		int getAge();
		int* getDaysToComplete();
		int day1;
		int day2;
		int day3;
		int getDay1();
		int getDay2();
		int getDay3();
		DegreeProgram getDegreeProgram();

		//Setters
		void setStudentID(string studentID);
		void setFirstName(string firstName);
		void setLastName(string lastName);
		void setEmailAddress(string emailAddress);
		void setAge(int age);
		void setDaysToComplete(int arr[3]);
		void setStudentDegree(DegreeProgram studentDegree);
		void Print();


		// Constructors

		Student();
		Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToComplete[3], DegreeProgram studentDegree);

		~Student(); //Destructor



};













#endif