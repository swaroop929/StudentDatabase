/*
 * BlockCourse.cpp
 *
 *  Created on: 14-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#include "BlockCourse.h"

using namespace std;

BlockCourse::BlockCourse(unsigned int coursekey, std::string title,
		std::string department, float credits, Poco::Data::Date startDate,
		Poco::Data::Date endDate, Poco::Data::Time startTime,
		Poco::Data::Time endTime) :
		Course(coursekey, title, department, credits), startDate(startDate), endDate(
				endDate), startTime(startTime), endTime(endTime) {
	for (auto itr : getMajorById()) {
		if (itr.second == department) {
			setMajor(itr.first);
		}
	}
}

/*void BlockCourse::setStartDate() {
 int date, month, year;
 cout << "Enter the Block Course start year: " << endl;
 cin >> year;
 cout << "Enter the Block Course start month: " << endl;
 cin >> month;
 cout << "Enter the Block Course start Date: " << endl;
 cin >> date;
 startDate.assign(year, month, date);
 }

 void BlockCourse::setEndDate() {
 int date, month, year;
 cout << "Enter the Block Course end year: " << endl;
 cin >> year;
 cout << "Enter the Block Course end month: " << endl;
 cin >> month;
 cout << "Enter the Block Course end Date: " << endl;
 cin >> date;
 endDate.assign(year, month, date);
 }

 void BlockCourse::setstartTime() {
 int seconds, minutes, hours;
 cout << "Enter the Block Course start hours: " << endl;
 cin >> hours;
 cout << "Enter the Block Course start minutes: " << endl;
 cin >> minutes;
 cout << "Enter the Block Course start seconds: " << endl;
 cin >> seconds;
 startTime.assign(hours, minutes, seconds);
 }

 void BlockCourse::setEndTime() {
 int seconds, minutes, hours;
 cout << "Enter the Block Course end hours: " << endl;
 cin >> hours;
 cout << "Enter the Block Course end minutes: " << endl;
 cin >> minutes;
 cout << "Enter the Block Course end seconds: " << endl;
 cin >> seconds;
 endTime.assign(hours, minutes, seconds);
 }*/

Poco::Data::Date BlockCourse::getStartDate() const {
	return startDate;
}

Poco::Data::Date BlockCourse::getEndDate() const {
	return endDate;
}

Poco::Data::Time BlockCourse::getStartTime() const {
	return startTime;
}

Poco::Data::Time BlockCourse::getEndTime() const {
	return endTime;
}

void BlockCourse::AddNewBlockCourse() {
	/*setMajor();
	 setCouseKey();
	 setTitle();
	 setCreditpoints();
	 setStartDate();
	 setEndDate();
	 setstartTime();
	 setEndTime();*/
}

void BlockCourse::print() const {
	cout << "Course " << getCourseKey() << " : " << getTitle()
			<< " for the major " << getMajorById()[getMajor()] << " with "
			<< getCreditPoints() << " credit points " << "starts on ";
	printDate(startDate);
	cout << " till ";
	printDate(endDate);
	cout << " from ";
	printTime(startTime);
	cout << " till ";
	printTime(endTime);
	cout << endl;
}
