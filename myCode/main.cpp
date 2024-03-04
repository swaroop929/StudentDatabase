// Standard (system) header files
#include <iostream>
#include <cstdlib>

using namespace std;

#include"SimpleUI.h"
#include "WeeklyCourse.h"

// Main program
int main() {

	//Course c1(42,"APT","Automation",2);
	//c1.print();
	WeeklyCourse w1(42, "APT", "Automation", 2,
			Poco::DateTime::DaysOfWeek::WEDNESDAY, Poco::Data::Time(10, 15, 0),
			Poco::Data::Time(11, 45, 0));
	BlockCourse b1(42, "APT", "Automation", 2, Poco::Data::Date(2000, 5, 10),
			Poco::Data::Date(2000, 5, 20), Poco::Data::Time(10, 15, 0),
			Poco::Data::Time(11, 45, 0));
	w1.print();
	StudentDb d;
	SimpleUI u(d);
	u.run();
	/*WeeklyCourse w;
	 w.setdayOfWeek();
	 cout<<w.getDayofWeek();*/

	return 0;
}
