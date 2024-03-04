/*
 * BlockCourse.h
 *
 *  Created on: 14-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#ifndef BLOCKCOURSE_H_
#define BLOCKCOURSE_H_

#include "Course.h"
#include <string>

class BlockCourse: public Course {
private:
	Poco::Data::Date startDate;
	Poco::Data::Date endDate;
	Poco::Data::Time startTime;
	Poco::Data::Time endTime;
public:
	BlockCourse(unsigned int coursekey, std::string title,
			std::string department, float credits, Poco::Data::Date startDate,
			Poco::Data::Date endDate, Poco::Data::Time startTime,
			Poco::Data::Time endTime);
	/*void setStartDate();
	 void setEndDate();
	 void setstartTime();
	 void setEndTime();*/
	Poco::Data::Date getStartDate() const;
	Poco::Data::Date getEndDate() const;
	Poco::Data::Time getStartTime() const;
	Poco::Data::Time getEndTime() const;
	void AddNewBlockCourse();
	void print() const;

};

#endif /* BLOCKCOURSE_H_ */
