/*
 * Address.h
 *
 *  Created on: 13-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_

#include <string>
#include<iostream>

class Address {
private:
	std::string street;
	unsigned short postalCode;
	std::string cityName;
	std::string additionalInfo;
public:
	Address(std::string street, unsigned short postalCode, std::string cityName,
			std::string additionalInfo);
	std::string getStreet() const;
	unsigned short getPostalCode() const;
	std::string getCityName() const;
	std::string getAdditionalInfo() const;
	void setStreet();
	void setPostalCode();
	void setCityName();
	void setAdditionalInfo();
};

#endif /* ADDRESS_H_ */
