/*
 * SimpleUI.h
 *
 *  Created on: 16-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#ifndef SIMPLEUI_H_
#define SIMPLEUI_H_

#include "StudentDb.h"
#include "BlockCourse.h"
#include "WeeklyCourse.h"
#include<algorithm>

class SimpleUI {
private:
	StudentDb database;
public:
	SimpleUI(StudentDb &db);
	void run();
};

#endif /* SIMPLEUI_H_ */
