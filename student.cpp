#include <string>
#include <iostream>
#include "student.h"










////
////////////////////
///////////////////////////////     Getters     /////////////////////////////// 
///////////////////
////




string Student::getStudentID() {

	return StudentID;


}



string Student::getFirstName() {


	return FirstName;


}

string Student::getLastName() {


	return LastName;

	

}

string Student::getEmailAddress() {

	return EmailAddress;

}

int Student::getAge() {

	return Age;

}


int* Student::getDaysToComplete() {

	 static int daysArr[3];
	for (int i = 0; i < 3; ++i) {
	
		daysArr[i] = DaysToComplete[i];
	
	}

	return daysArr;


}

int Student::getDay1() {


	return DaysToComplete[0];




}

int Student::getDay2() {

	return DaysToComplete[1];


}

int Student::getDay3() {


	return DaysToComplete[2];

}

DegreeProgram Student::getDegreeProgram() {

	return StudentDegree;


}





////
////////////////////
///////////////////////////////      Setters     ///////////////////////////////
///////////////////
////


void Student::setStudentID(string studentID) {

	StudentID = studentID;

}

void Student::setFirstName(string firstName) {

	FirstName = firstName;

}

void Student::setLastName(string lastName) {

	LastName = lastName;

}


void Student::setEmailAddress(string emailAddress) {

	EmailAddress = emailAddress;
	
}


void Student::setAge(int age) {

	Age = age;

}

void Student::setDaysToComplete(int arr[3]) {


	for (int i = 0; i < 3; ++i) {
	
		DaysToComplete[i] = arr[i];
	
	
	}


}


void Student::setStudentDegree(DegreeProgram studentDegree) {


	StudentDegree = studentDegree;

}



void Student::Print() {


	cout << getStudentID() << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" <<  "Age: " << getAge() << "\t" << " DaysInCourse: ";
	cout << "{" << getDay1() << "," << getDay2() << "," << getDay3() << "}" << "\t" << "Degree Program: ";




/*	cout << "First Name: " << FirstName << endl;
	cout << "Last Name: " << LastName << endl;
	cout << "Email Address: " << EmailAddress << endl;
	cout << "Age: " << Age << endl;
	cout << "Days To Complete 3 Courses: " << DaysToComplete[0]  << " " << DaysToComplete[1] << " " << DaysToComplete[2] << endl;
	cout << "Degree Program: ";
*/

	switch (StudentDegree) {
	
		case 0:
			cout << "Network" << endl;
			break;
		case 1:
			cout << "Security" << endl;
			break;
		case 2:
			cout << "Software" << endl;

		
			break;
	
	
	
	
	}

	cout << "\n\n";

}

Student::Student() {

	Age = 0;
	StudentDegree = UNKNOWN;
	day1 = 0;
	day2 = 0;
	day3 = 0;

	DaysToComplete[0] = day1;
	DaysToComplete[1] = day2;
	DaysToComplete[2] = day3;


}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToComplete[3], DegreeProgram studentDegree) {

	StudentID = studentID;
	FirstName = firstName;
	LastName = lastName;
	EmailAddress = emailAddress;
	Age = age;
	
	setDaysToComplete(daysToComplete);

	StudentDegree = studentDegree;



}


Student::~Student() {

	



}