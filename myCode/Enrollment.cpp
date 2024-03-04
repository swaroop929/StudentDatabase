/*
 * Enrollment.cpp
 *
 *  Created on: 13-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#include "Enrollment.h"
using namespace std;

Enrollment::Enrollment(float grade, std::string semester, Course &course) :
		grade(grade), semester(semester), course(&course) {
}

float Enrollment::getGrade() const {
	return grade;
}

std::string Enrollment::getSemester() const {
	return semester;
}

/*void Enrollment::setGrade() {
 cout << "Enter the Grade of the student: " << endl;
 cin >> grade;
 }*/

Course* Enrollment::getRegisteredCourses() const {
	return course;
}

/*void Enrollment::setSemester() {
 cout << "Enter the Semester " << endl;
 cin >> semester;
 }*/
