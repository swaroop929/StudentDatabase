/*
 * WeeklyCourse.cpp
 *
 *  Created on: 14-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#include "WeeklyCourse.h"

using namespace std;

WeeklyCourse::WeeklyCourse(unsigned int coursekey, std::string title,
		std::string department, float credits,
		Poco::DateTime::DaysOfWeek dayOfWeek, Poco::Data::Time startTime,
		Poco::Data::Time endTime) :
		Course(coursekey, title, department, credits), dayOfWeek(dayOfWeek), startTime(
				startTime), endTime(endTime) {
	for (auto itr : getMajorById()) {
		if (itr.second == department) {
			setMajor(itr.first);
		}
	}

}

/*void WeeklyCourse::setdayOfWeek() {
 int day;
 cout << "Enter which day of the week this course will take place (0 to 6): "
 << endl;
 cin >> day;
 dayOfWeek = (Poco::DateTime::DaysOfWeek) day;
 }

 void WeeklyCourse::setStartTime() {
 int seconds, minutes, hours;
 cout << "Enter the Weekly Course start hours: " << endl;
 cin >> hours;
 cout << "Enter the Weekly Course start minutes: " << endl;
 cin >> minutes;
 cout << "Enter the Weekly Course start seconds: " << endl;
 cin >> seconds;
 startTime.assign(hours, minutes, seconds);
 }

 void WeeklyCourse::setEndTime() {
 int seconds, minutes, hours;
 cout << "Enter the Weekly Course end hours: " << endl;
 cin >> hours;
 cout << "Enter the Weekly Course end minutes: " << endl;
 cin >> minutes;
 cout << "Enter the Weekly Course end seconds: " << endl;
 cin >> seconds;
 endTime.assign(hours, minutes, seconds);
 }*/

Poco::DateTime::DaysOfWeek WeeklyCourse::getDayofWeek() const {
	return dayOfWeek;
}

Poco::Data::Time WeeklyCourse::getStartTime() const {
	return startTime;
}

Poco::Data::Time WeeklyCourse::getEndTime() const {
	return endTime;
}

void WeeklyCourse::AddNewWeeklyCourse() {
	/*setMajor();
	 setCouseKey();
	 setTitle();
	 setCreditpoints();
	 setdayOfWeek();
	 setStartTime();
	 setEndTime();*/
}

void WeeklyCourse::print() const {
	cout << "Course " << getCourseKey() << " : " << getTitle()
			<< " for the major " << getMajorById()[getMajor()] << " with "
			<< getCreditPoints() << " credit points occurs on ";
	switch (dayOfWeek) {
	case 0:
		cout << "Sunday";
		break;
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	}
	cout << " from ";
	printTime(startTime);
	cout << " till ";
	printTime(endTime);
	cout << endl;
}
