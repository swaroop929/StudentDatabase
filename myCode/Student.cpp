/*
 * Student.cpp
 *
 *  Created on: 13-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#include "Student.h"

using namespace std;
using namespace Poco::Data;

unsigned int Student::nextMatrikelNumber = 100000;

Student::Student(std::string firstName, std::string lastName,
		Poco::Data::Date dateofBirth, std::string street,
		unsigned short postalCode, std::string cityName,
		std::string additionalInfo) :
		firstName(firstName), lastName(lastName), dateofBirth(dateofBirth) {
	this->matrikelNumber = this->nextMatrikelNumber;
	this->nextMatrikelNumber++;
	address = std::make_shared<Address>(street, postalCode, cityName,
			additionalInfo);

}

unsigned int Student::getMatrikelNumber() const {
	return matrikelNumber;
}

void Student::printStudent(unsigned int matrNumber) const {
	cout << "Student Matrikel number is " << matrikelNumber << endl
			<< "Name is: " << firstName << " " << lastName << endl;
	/*<< "Date of birth is: " << dateofBirth.day() << "/"
	 << dateofBirth.month() << "/" << dateofBirth.year() << endl;*/

	/*for (auto enrollment : enrollments) {
	 cout << "Grade is " << enrollment.getGrade() << endl << "Semester is "
	 << enrollment.getSemester() << endl;
	 }*/
}

std::string Student::getFirstName() const {
	return firstName;
}

std::string Student::getLastName() const {
	return lastName;
}

Poco::Data::Date Student::getDateOfBirth() const {
	return dateofBirth;
}

std::vector<Enrollment> Student::getEnrollments() const {
	return enrollments;
}

void Student::setFirstName() {
	cout << "Enter the first name " << endl;
	cin >> firstName;
}

void Student::setLastName() {
	cout << "Enter the last name " << endl;
	cin >> lastName;
}

void Student::setDateofBirth() {
	int year, month, date;

	cout << "Enter the date of birth year (yyyy)" << endl;
	cin >> year;

	cout << "Enter the month of birth month (mm)" << endl;
	cin >> month;

	cout << "Enter the date of birth date (dd)" << endl;
	cin >> date;

	dateofBirth.assign(year, month, date);
}

void Student::PushEnrollment(Enrollment e) {
	enrollments.push_back(e);
}

std::shared_ptr<Address> Student::getAddress() const {
	return address;
}
