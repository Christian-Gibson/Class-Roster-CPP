#include <string>
#include <iostream>
#include "roster.h"
#include "student.h"












void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
	DegreeProgram studentDegree) {

	int arr1[3];
	arr1[0] = daysInCourse1;
	arr1[1] = daysInCourse2;
	arr1[2] = daysInCourse3;

	

	

	
	
	
	/**/

	

 	
		if (classRosterArray[0]->getStudentID() == "") {
		

			Student obj1;


			obj1.setStudentID(studentID);
			obj1.setFirstName(firstName);
			obj1.setLastName(lastName);
			obj1.setEmailAddress(emailAddress);
			obj1.setAge(age);
			obj1.setDaysToComplete(arr1);
			obj1.setStudentDegree(studentDegree);
		
			*classRosterArray[0] = obj1;
			
		
		
		}
		else if (classRosterArray[1]->getStudentID() == "") {
		
			Student obj1;


			obj1.setStudentID(studentID);
			obj1.setFirstName(firstName);
			obj1.setLastName(lastName);
			obj1.setEmailAddress(emailAddress);
			obj1.setAge(age);
			obj1.setDaysToComplete(arr1);
			obj1.setStudentDegree(studentDegree);

			*classRosterArray[1] = obj1;
		
		}
		else if (classRosterArray[2]->getStudentID() == "") {

			Student obj1;


			obj1.setStudentID(studentID);
			obj1.setFirstName(firstName);
			obj1.setLastName(lastName);
			obj1.setEmailAddress(emailAddress);
			obj1.setAge(age);
			obj1.setDaysToComplete(arr1);
			obj1.setStudentDegree(studentDegree);

			*classRosterArray[2] = obj1;

		}
		else if (classRosterArray[3]->getStudentID() == "") {

			Student obj1;


			obj1.setStudentID(studentID);
			obj1.setFirstName(firstName);
			obj1.setLastName(lastName);
			obj1.setEmailAddress(emailAddress);
			obj1.setAge(age);
			obj1.setDaysToComplete(arr1);
			obj1.setStudentDegree(studentDegree);

			*classRosterArray[3] = obj1;

		}
		else if (classRosterArray[4]->getStudentID() == "") {

			Student obj1;


			obj1.setStudentID(studentID);
			obj1.setFirstName(firstName);
			obj1.setLastName(lastName);
			obj1.setEmailAddress(emailAddress);
			obj1.setAge(age);
			obj1.setDaysToComplete(arr1);
			obj1.setStudentDegree(studentDegree);

			*classRosterArray[4] = obj1;

		}




	
	
	
	

}



void Roster::remove(string studentID) {

	Student* removePtr = nullptr;
	bool isFound = false;

	for (int i = 0; i < 5; ++i) {


		if (classRosterArray[i]->getStudentID() == studentID && classRosterArray[i]->getAge() >= 1) {

			cout << "Removing " << classRosterArray[i]->getStudentID() << " from the data table..." << endl;

			cout << "...\n...\n...\n" << endl;

			cout << "Complete!\n\n\n...\n\n\n" << endl;
			
			int empArr1[3] = { 0, 0, 0 };
			
			classRosterArray[i]->setStudentID("");
			classRosterArray[i]->setFirstName("");
			classRosterArray[i]->setLastName("");
			classRosterArray[i]->setEmailAddress("");
			classRosterArray[i]->setAge(0);
			classRosterArray[i]->setStudentDegree(UNKNOWN);
			classRosterArray[i]->setDaysToComplete(empArr1);
			
			isFound = true;
			break;




		}





	}



	if (!isFound == true) {


		cout << "Searching records for " << studentID  << "......." << endl;
		cout << "..." << ".......\n\n" << endl;
		cout << "Sorry, requested Student ID " << studentID << " not found in records.\n\n" << endl;


	}





}

void Roster::printAll() {     //Print all student information

	cout << "=====================================Printing data for all students==================================" << endl;

	for (int i = 0; i < 5; ++i) {
	
		if (classRosterArray[i] != nullptr) {

			classRosterArray[i]->Print();

			cout << "\n\n" << endl;
		}

	}







}

void Roster::printAverageDaysInCourse(string studentID) {  //Print the average days in course for a particular student with StudentID as the parameter.

	
	float total = 0.0;
	float avg;
	

	for (int i = 0; i < 5; ++i) {

		if (classRosterArray[i]->getStudentID() == studentID) {


			
			cout << (*classRosterArray[i]).getStudentID() << " found..." << "Name: " << classRosterArray[i]->getFirstName() << " " << classRosterArray[i]->getLastName() << endl;

			cout << "Day 1: " << classRosterArray[i]->getDay1() << endl;
			cout << "Day 2: " << classRosterArray[i]->getDay2() << endl;
			cout << "Day 3: " << classRosterArray[i]->getDay3() << endl;

			total += (classRosterArray[i]->getDay1()) + (classRosterArray[i]->getDay2()) + (classRosterArray[i]->getDay3());

			avg = total / 3;
			cout << "Average number of Days in Course: ";
			cout << avg << endl;
		}
		






	}



	cout << "\n\n\n" << endl;
	
	



}



void Roster::printInvalidEmails() {      //Determine which parsed Emails are invalid and print them for the user.

	cout << "=========================Printing all invalid email inputs======================================" << endl;


	for (int i = 0; i < 5; ++i) {

		
		if (classRosterArray[i]->getEmailAddress().find('@') != string::npos) {

			if (classRosterArray[i]->getEmailAddress().find('.') != string::npos) {


				if (classRosterArray[i]->getEmailAddress().find(' ') != string::npos) {


					cout << classRosterArray[i]->getEmailAddress() << " is invalid!" << endl;
					


				}





			}
			else {
			
			
				cout << classRosterArray[i]->getEmailAddress() << " is invalid!" << endl;
			
			
			}







		}
		else {
		
			cout << classRosterArray[i]->getEmailAddress() << " is invalid!" << endl;
		
		
		}








		

	}




}



void Roster::printByDegreeProgram(DegreeProgram studentDegree) {

	cout << "==========================Printing students by degree program==============================================" << endl;

	for (int i = 0; i < 5; i++) {

		if ((classRosterArray[i]->getDegreeProgram() == studentDegree)) {


			classRosterArray[i]->Print();






		}







	}




}



Roster::Roster() {
	


}

Roster::Roster(Student rosterArray[5]) {

	for (int i = 0; i < sizeof(classRosterArray)/sizeof(classRosterArray[i]); ++i) {
	
		classRosterArray[i] = &rosterArray[i];
		
	
	}

	


}



Roster::~Roster() {

	cout << "Roster Destructor called." << endl;

}

 DegreeProgram Roster::strToDegree(string& inputString) {

	if (inputString == "SOFTWARE") {

		return SOFTWARE;


	}
	else if (inputString == "NETWORK") {
	
		return NETWORK;
	
	}
	else if (inputString == "SECURITY") {
	
	
		return SECURITY;
	
	}
	else {


		return UNKNOWN;


	}



}


