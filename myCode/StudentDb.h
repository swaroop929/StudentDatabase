/*
 * StudentDb.h
 *
 *  Created on: 14-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#ifndef STUDENTDB_H_
#define STUDENTDB_H_

#include "Student.h"
#include "Course.h"
#include<memory>

class StudentDb {
private:
	std::map<int,std::unique_ptr<const Course>> kl;
	std::map<int, Student> students;
	static int StudentCount;
	static int CourseCount;
public:
	StudentDb();
	//std::map<int, std::unique_ptr<const Course>>& getCourses() const;
	std::map<int, Student> getStudents() const;
	//void PushCourse(Course* c);
	void AddNewStudent(); //Inc count whenever new student is added from simpleUI
	void AddNewCourse();
	void AddEnrollment(unsigned int matr_num, unsigned int courseKey,std::string semester);
	std::map<int, Student>::iterator FindMatrikelNumber(unsigned int num);
	void UpdateStudent(unsigned int matr);
};

#endif /* STUDENTDB_H_ */
