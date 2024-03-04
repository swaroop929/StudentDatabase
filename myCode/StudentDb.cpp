/*
 * StudentDb.cpp
 *
 *  Created on: 14-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#include "StudentDb.h"

using namespace std;

int StudentDb::StudentCount;
int StudentDb::CourseCount;

StudentDb::StudentDb() {

}

//std::map<int, std::unique_ptr<const Course>>& StudentDb::getCourses()  const{
//	return kl;
// }

std::map<int, Student> StudentDb::getStudents() const {
	return students;
}

/*void StudentDb::PushCourse(Course *c) {
 //courses.insert({2,c});
 }*/

void StudentDb::AddNewStudent() {
	std::string firstName;
	std::string lastName;
	Poco::Data::Date dateofBirth;
	int year, month, day;
	std::string street;
	unsigned short postalCode;
	std::string cityName;
	std::string additionalInfo;

	cout << "Enter the first name ";
	cin >> firstName;
	cout << endl;

	cout << "Enter the last name ";
	cin >> lastName;
	cout << endl;

	cout << "Enter the year of birth ";
	cin >> year;
	cout << endl;

	cout << "Enter the month of birth ";
	cin >> month;
	cout << endl;

	cout << "Enter the day of birth ";
	cin >> day;
	cout << endl;

	dateofBirth.assign(year, month, day);

	cout << "Enter the street name ";
	std::getline(std::cin >> std::ws, street);
	cout << endl;

	cout << "Enter the postal code ";
	cin >> postalCode;
	cout << endl;

	cout << "Enter the city name ";
	//std::getline(std::cin, cityName);
	std::getline(std::cin >> std::ws, cityName);
	cout << endl;

	cout << "Enter the additional info ";
	std::getline(std::cin >> std::ws, additionalInfo);
	cout << endl;

	Student temp(firstName, lastName, dateofBirth, street, postalCode, cityName,
			additionalInfo);

	students.insert( { temp.getMatrikelNumber(), temp });

}

map<int, Student>::iterator StudentDb::FindMatrikelNumber(
		unsigned int matr_num) {
	auto itr = students.find(matr_num);
	return itr;
}

void StudentDb::AddEnrollment(unsigned int matr_num, unsigned int courseKey,
		std::string semester) {
	auto itr = students.find(matr_num);
	if (itr != students.end()) {
		float grade;
		cout << "Enter the grade " << endl;
		cin >> grade;

		//Enrollment temp(grade,semester,courses[courseKey]);
	} else {
		cout << "Student not found..." << endl;
		return;
	}
}

void StudentDb::UpdateStudent(unsigned int matr) {
	auto itr = students.find(matr);
	if (itr != students.end()) {
		int choice;
		cout << "What item do you want to change? " << endl << "1. First Name"
				<< endl << "2. Last Name" << endl << "3. Date of birth" << endl
				<< "4. enrollments" << endl << "5. Street" << endl
				<< "6. Postal code" << endl << "7. City Name" << endl
				<< "8. Additional info" << endl;
		cin >> choice;
		switch (choice) {
		case 1: {
			itr->second.setFirstName();
			break;
		}
		case 2: {
			itr->second.setLastName();
			break;
		}
		case 3: {
			itr->second.setDateofBirth();
			break;
		}
		case 4: {
			//itr->second.set(); //TODO: Enrollments
			break;
		}
		case 5: { //TODO: Address is immutable
			itr->second.getAddress()->setStreet();
			break;
		}
		case 6: {
			itr->second.getAddress()->setPostalCode();
			break;
		}
		case 7: {
			itr->second.getAddress()->setCityName();
			break;
		}
		case 8: {
			itr->second.getAddress()->setAdditionalInfo();
			break;
		}
		default:
			cout << "Wrong input. Start over" << endl;
			break;
		}
	} else {
		cout << "Student not found" << endl;
	}
}

void StudentDb::AddNewCourse() {
	unsigned int courseKey;
	std::string title;
	string major;
	float creditPoints;
	Poco::DateTime::DaysOfWeek dayOfWeek; //0 to 6
	Poco::Data::Time startTime;
	Poco::Data::Time endTime;

	CourseCount++;

	cout << "Enter the course key ";
	cin >> courseKey;
	cout << endl;

	cout << "Enter the course title ";
	cin >> title;
	cout << endl;

	cout << "Enter the major ";
	cin >> major;
	cout << endl;

	cout << "Enter the credit points of the course ";
	cin >> creditPoints;
	cout << endl;

	//unique_ptr<const Course> c = make_unique<WeeklyCourse>(courseKey,title,major,creditPoints,dayOfWeek,startTime,endTime);
	//courses.insert(make_pair(courseKey, std::move(c)));

}
