/*
 * SimpleUI.cpp
 *
 *  Created on: 16-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#include "SimpleUI.h"

using namespace std;

SimpleUI::SimpleUI(StudentDb &db) :
		database(db) {
}

void SimpleUI::run() {
	int input;

	do {
		cout << endl << "The options available are: " << endl
				<< "1. Add new course " << endl << "2. List courses" << endl
				<< "3. Add new student " << endl << "4. Add enrollment " << endl
				<< "5. Print student " << endl << "6. Search Student " << endl
				<< "7. Update student " << endl << "0. To exit" << endl;
		cout << "Enter your input: " << endl;
		cin >> input;

		switch (input) {
		case 0:
			cout << "Exiting the program " << endl;
			break;
		case 1: { //add new course
			database.AddNewCourse();
			break;
		}
		case 2: { //List Courses

			break;
		}
		case 3: { //Add new student
			database.AddNewStudent();
			break;
		}
		case 4: { //Add enrollment
			unsigned int matr_num, courseKey;
			std::string semester;

			cout << "Enter the student matrikel number ";
			cin >> matr_num;

			cout << "Enter the course id";
			cin >> courseKey;

			cout << "Enter the semester";
			cin >> semester;

			database.AddEnrollment(matr_num, courseKey, semester);
			break;
		}
		case 5: { //Print Student
			unsigned int m;
			cout << "Enter the students Matrikel Number " << endl;
			cin >> m;
			auto kid = database.FindMatrikelNumber(m);
			cout << "Name: " << kid->second.getFirstName() << " "
					<< kid->second.getLastName() << endl;
			cout << "Matrikel Number: " << kid->second.getMatrikelNumber()
					<< endl;
			cout << "Date of birth (yyyy/mm/dd): "
					<< kid->second.getDateOfBirth().year() << "/"
					<< kid->second.getDateOfBirth().month() << "/"
					<< kid->second.getDateOfBirth().day() << endl;

			cout << "street name: " << kid->second.getAddress()->getStreet()
					<< endl << "City Name: "
					<< kid->second.getAddress()->getCityName() << endl
					<< "Postal code: "
					<< kid->second.getAddress()->getPostalCode() << endl
					<< "Addn info: "
					<< kid->second.getAddress()->getAdditionalInfo() << endl;

			for (auto kid_enrollment : kid->second.getEnrollments()) { //TODO: Fix this, not printing anything as there is no data in Enrollments
				cout << "Students grade: " << kid_enrollment.getGrade() << endl;
				cout << "Students current semester: "
						<< kid_enrollment.getSemester() << endl;
			}
			cout << "===============================================" << endl;
			break;
		}
		case 6: { //Search Student
			string s;
			cout << "Enter the search input for student " << endl;
			cin >> s;
			map<int, Student>::iterator itr;
			for (auto it : database.getStudents()) {
				if (it.second.getFirstName().find(s) != string::npos
						|| it.second.getLastName().find(s) != string::npos) {
					it.second.printStudent((it.first));
				} else if (it.second.getFirstName().find(s) == string::npos
						|| it.second.getLastName().find(s) == string::npos) {
					cout << "Student Not found" << endl;
					break;
				}
			}
			cout << "=======================================" << endl;

			break;
		}
		case 7: { //Update Student
			unsigned int matr;
			cout << "Enter the Matrikel Number " << endl;
			cin >> matr;
			database.UpdateStudent(matr);
			break;
		}
		}
	} while (input != 0);
}
