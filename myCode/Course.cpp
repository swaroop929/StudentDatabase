/*
 * Course.cpp
 *
 *  Created on: 13-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#include "Course.h"

using namespace std;

std::map<unsigned char, std::string> Course::majorById = { { 1, "Embedded" }, {
		2, "Automation" }, { 3, "Communication" }, { 4, "Power" } };

Course::Course(unsigned int coursekey, std::string title,
		std::string department, float creditPoints) :
		courseKey(coursekey), title(title), creditPoints(creditPoints) {
	//Traverse through map and attach the value 1 or 2.. to major
	for (auto itr : majorById) {
		if (itr.second == department) {
			major = itr.first;
		}
	}
}

Course::~Course() {

}

unsigned char Course::getMajor() const {
	return major;
}

unsigned int Course::getCourseKey() const {
	return courseKey;
}

std::string Course::getTitle() const {
	return title;
}

float Course::getCreditPoints() const {
	return creditPoints;
}

std::map<unsigned char, std::string> Course::getMajorById() const {
	return majorById;
}
void Course::setMajor(unsigned char major) {
	this->major = major;
}

void Course::print() const {
	cout << "Course " << courseKey << " : " << title << " for the major "
			<< majorById[major] << " with " << creditPoints << " credit points "
			<< endl;
}

void Course::printDate(Poco::Data::Date date) const {
	cout << date.day() << "." << date.month() << "." << date.year();
}

void Course::printTime(Poco::Data::Time time) const {
	cout << time.hour() << ":" << time.minute();
}
/*void Course::setCouseKey() {
 cout << "Enter the Course key (B or W) :" << endl;
 cin >> courseKey;
 }

 void Course::setTitle() {
 cout << "Enter the course Title :" << endl;
 cin >> title;
 }

 void Course::setCreditpoints() {
 cout << "Enter the Credit points :" << endl;
 cin >> creditPoints;
 }*/
