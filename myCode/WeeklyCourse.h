/*
 * WeeklyCourse.h
 *
 *  Created on: 14-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#ifndef WEEKLYCOURSE_H_
#define WEEKLYCOURSE_H_

#include <Poco/DateTime.h>
#include "Course.h"

class WeeklyCourse: public Course {
private:
	Poco::DateTime::DaysOfWeek dayOfWeek; //0 to 6
	Poco::Data::Time startTime;
	Poco::Data::Time endTime;
public:
	WeeklyCourse(unsigned int coursekey, std::string title,
			std::string department, float credits,
			Poco::DateTime::DaysOfWeek dayOfWeek, Poco::Data::Time startTime,
			Poco::Data::Time endTime);
	/*void setdayOfWeek();
	 void setStartTime();
	 void setEndTime();*/
	Poco::DateTime::DaysOfWeek getDayofWeek() const;
	Poco::Data::Time getStartTime() const;
	Poco::Data::Time getEndTime() const;
	void AddNewWeeklyCourse();
	void print() const;

};

#endif /* WEEKLYCOURSE_H_ */
