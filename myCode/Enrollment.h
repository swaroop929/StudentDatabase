/*
 * Enrollment.h
 *
 *  Created on: 13-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#ifndef ENROLLMENT_H_
#define ENROLLMENT_H_

#include "Course.h"
#include<iostream>

class Enrollment {
private:
	float grade;
	std::string semester;
	Course *course;
public:
	Enrollment(float grade, std::string semester, Course &course);
	float getGrade() const;
	std::string getSemester() const;
	Course* getRegisteredCourses() const;
	//void setGrade();
	//void setSemester();

};

#endif /* ENROLLMENT_H_ */
