/*
 * Student.h
 *
 *  Created on: 13-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include "Poco/Data/Date.h"
#include "Address.h"
#include<vector>
#include"Enrollment.h"
#include<iostream>
#include<memory>

class Student {
private:
	static unsigned int nextMatrikelNumber;
	unsigned int matrikelNumber;
	std::string firstName;
	std::string lastName;
	Poco::Data::Date dateofBirth;
	std::vector<Enrollment> enrollments;
	std::shared_ptr<Address> address;
public:
	Student(std::string firstName, std::string lastName,
			Poco::Data::Date dateofBirth, std::string street,
			unsigned short postalCode, std::string cityName,
			std::string additionalInfo);
	unsigned int getMatrikelNumber() const;
	void printStudent(unsigned int matrNumber) const;
	std::string getFirstName() const;
	std::string getLastName() const;
	Poco::Data::Date getDateOfBirth() const;
	std::vector<Enrollment> getEnrollments() const;
	void setFirstName();
	void setLastName();
	void setDateofBirth();
	void PushEnrollment(Enrollment e);
	std::shared_ptr<Address> getAddress() const;

};

#endif /* STUDENT_H_ */
