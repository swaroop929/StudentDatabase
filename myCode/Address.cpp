/*
 * Address.cpp
 *
 *  Created on: 13-Jan-2024
 *      Author: Sai Swaroop Maram
 */

#include "Address.h"

using namespace std;

Address::Address(std::string street, unsigned short postalCode,
		std::string cityName, std::string additionalInfo) :
		street(street), postalCode(postalCode), cityName(cityName), additionalInfo(
				additionalInfo) {
}

std::string Address::getStreet() const {
	return street;
}

unsigned short Address::getPostalCode() const {
	return postalCode;
}

std::string Address::getCityName() const {
	return cityName;
}

std::string Address::getAdditionalInfo() const {
	return additionalInfo;
}

void Address::setStreet() {
	cout << "Enter the street name: ";
	std::getline(std::cin >> std::ws, street);

}

void Address::setPostalCode() {
	cout << "Enter the Postal code: ";
	cin >> postalCode;
}

void Address::setCityName() {
	cout << "Enter the City name: ";
	std::getline(std::cin >> std::ws, cityName);
}

void Address::setAdditionalInfo() {
	cout << "Enter the additional info: " << endl;
	std::getline(std::cin >> std::ws, additionalInfo);
}

