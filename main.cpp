/*
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
THIS IS THE VERSION TO BE UPLOADED TO GITHUB. THIS IS THE VERSION TO BE UPLOADED TO GITHUB. THIS IS THE VERSION TO BE UPLOADED TO GITHUB.//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Christian Gibson 2023 All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/

/*
TO DO LIST:

Replace all namespace std instances with their long form (std::)
Create all objects dynamically with NEW and destroy them correctly with DELETE (no destructor messages too)


*/

#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"
#include <iomanip>
#include <conio.h>
#include <fstream>

using namespace std;

void myIntro();

int main() {

	myIntro(); //Output name, student ID, course, and language used per rubric

	Student studentsArr[5] = { };

	cout << fixed << setprecision(1);


	Student* myPtr = studentsArr;


	Roster classRoster(studentsArr); //Created an instance of Roster called classRoster per RUBRIC



	


	int arr1[3] = {  40 , 69, 70};
	int arr2[3] = { 1, 2, 3 };
	

	/*
	const string studentData[] =
	{ "A1,James,Simms,James1989@gmai l.com,20,39,44,40,NETWORK",
	"A2,Penelope,Erickson,MissEricksonP_1990@gmailcom,19,55,20,48,SECURITY", //PERSONAL DATA TO BE PARSED AND ADDED TO CLASS ROSTER PER RUBRIC.
	"A3,Jared,Costas,Your_lawyer99hotmail.com,19,24,43,23,SECURITY",         //MULTIPLE EMAILS HAVE INCORRECT FORMATTING FOR THE PURPOSES OF DEMONSTRATING
	"A4,Erica,Blandino,Erica.blandino@comcast.net,22,52,38,30,SOFTWARE",	//THE ALGORITHM WHICH TESTS FOR INCORRECT EMAIL FORMATS.
	"A5,Christian,G,1337M4ST3R@winthrop.edu,31,34,31,48,SOFTWARE" }; 

	string parsedData[9] = {};
	string dataHolder[9] = {};

	//
	int commaFind;
	string commaInput;

	for (int k = 0; k < 5; ++k) {


		commaInput = studentData[k];





		

			while (commaInput.find(',') != string::npos) {



				for (int l = 0; l < 8; ++l) {

					//
					commaFind = commaInput.find(',');

					parsedData[l] = commaInput.substr(0, commaFind);

			//		cout << parsedData[l] << endl;



					commaInput.erase(0, commaFind + 1);



					dataHolder[l] = parsedData[l];


				}


			}

			if (commaInput.find(',') == string::npos) {

				parsedData[8] = commaInput;
			//	cout << parsedData[8] << "--is npos TEST--\n\n" << endl;

				dataHolder[8] = parsedData[8];

				
			

				cout << endl;

				



				classRoster.add(dataHolder[0], dataHolder[1], dataHolder[2], dataHolder[3], stoi(dataHolder[4]),
					stoi(dataHolder[5]), stoi(dataHolder[6]), stoi(dataHolder[7]), Roster::strToDegree(dataHolder[8])); //Each students data added to the class roster.
				

				

				

			}

			


		
		

	}

	*/

	int commaLocation;
	int spaceLocation;
	std::string parsedData[9] = {};
	std::string dataHolder[9] = {};

	std::ifstream inputFile;
	ofstream outputFile;
	std::string strToParse;
	






	inputFile.open("fileText.txt");


	if (!inputFile.is_open()) {



		std::cout << "File could not be opened." << std::endl;

		return 1;










	}
	else {

		while (!inputFile.eof()) {


		 //	inputFile >> strToParse; 

			getline(inputFile, strToParse); //Get everything in the file up to the newline

			
		/*
			if (strToParse.find(' ') != std::string::npos) {


				spaceLocation = strToParse.find(' ');
				strToParse.at(spaceLocation) = '*';




			}
			*/

			while (strToParse.find(',') != std::string::npos) {

				for (int i = 0; i < sizeof(parsedData) / sizeof(parsedData[i]); ++i) {




					commaLocation = strToParse.find(',');
					parsedData[i] = strToParse.substr(0, commaLocation);


					strToParse.erase(0, commaLocation + 1);

					dataHolder[i] = parsedData[i];


				}




			}
			if (strToParse.find(',') == std::string::npos) {

				parsedData[8] = strToParse;


				dataHolder[8] = parsedData[8];





				




				classRoster.add(dataHolder[0], dataHolder[1], dataHolder[2], dataHolder[3], stoi(dataHolder[4]),
					stoi(dataHolder[5]), stoi(dataHolder[6]), stoi(dataHolder[7]), Roster::strToDegree(dataHolder[8])); //Each students data added to the class roster.

				


				
				

			}


			inputFile.ignore();








		}









	}
	

	

	classRoster.printAll(); //Print all data per rubric

	

	
	classRoster.printInvalidEmails(); //Print all invalid emails per rubric
	

	

	



//	for (j = 0; j < 3; ++j) {
//		studentPtr[j].Print();
	//	arr3[j].Print();
//	}
//	myPtr = myStudent1.getDaysToComplete();
//	for (j = 0; j < 3; ++j) {
//		cout << myPtr[j] << endl
//	}

	
	cout << "\n\n\n";

	
	cout << "=====================================Average Days In 3 Courses for Each Student=========================================" << endl;


	for (int i = 0; i < 5; ++i) {                                               //Loop through student roster and list each student average days per rubric.

		classRoster.printAverageDaysInCourse(studentsArr[i].getStudentID());
		



	}
	


	classRoster.printByDegreeProgram(SOFTWARE); //Print only Software Majors per rubric.
	cout << "========================================================================================================================" << endl;

	classRoster.remove("A3"); //Removed student with specified StudentID as parameter per rubric.

	classRoster.printAll(); //Print all students per rubric.



	classRoster.remove("A3"); //Searching for Student with StudentID parameter, if not found then output "not found" msg per rubric.





	cout << "-------------------------------------------------------" << endl;
	cout << "Exiting program............Press any key to exit......." << endl; //Roster destructor (and Student destructor) is called upon ending program per rubric.
	cout << "--------------------------------------------------------" << endl;

	_getch(); //Press any key for user exit
	
	
	return 0;

	




}


void myIntro() {

	cout <<  "=============================================================================" << endl;
	cout << "Project: Class Roster in C++" << endl;

	cout << "Name: Christian " << endl;

	cout << "Language: C++" << endl;
	
	cout << "=============================================================================" << endl;


}