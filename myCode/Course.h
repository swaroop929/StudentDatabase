/*
 * Course.h
 *
 *  Created on: 13-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#ifndef COURSE_H_
#define COURSE_H_

#include<string>
#include "Poco/Data/Date.h"
#include "Poco/Data/Time.h"
#include <map>
#include<iostream>

class Course {
private:
	static std::map<unsigned char, std::string> majorById;
	unsigned int courseKey; //W or B
	std::string title;
	unsigned char major;
	float creditPoints;

public:
	Course(unsigned int coursekey, std::string title, std::string department,
			float creditPoints);
	virtual ~Course()=0;

	//Getter functions
	unsigned char getMajor() const;
	unsigned int getCourseKey() const;
	std::string getTitle() const;
	float getCreditPoints() const;
	std::map<unsigned char, std::string> getMajorById() const;

	//Setter function, used in Block and weekly course to set this variable from constructor param
	void setMajor(unsigned char major);
	//Print
	virtual void print() const;
	void printDate(Poco::Data::Date date) const;
	void printTime(Poco::Data::Time time) const;

	/*void setCouseKey();
	 void setTitle();
	 void setCreditpoints();*/

};

#endif /* COURSE_H_ */
