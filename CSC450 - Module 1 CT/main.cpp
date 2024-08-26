/*
 * main.cpp
 *
 *  Created on: Aug 23, 2024
 *      Author: Justin McCartney
 */

// PSEUDOCODE
/*
 * main []
 * 	hard-coded
 * 		first name
 * 		last name
 * 		address
 * 		city
 * 		zip
 *
 * 	Outputs
 * 		first name
 * 		last name
 * 		address
 * 		city
 * 		zip
 *
 * 	return 0
 */

#include <iostream>
using namespace std;

int main() {
	// Information of fictional person
	string firstName = "Justin";
	string lastName = "McCartney";
	string streetAddress = "1234 West North Avenue";
	string city = "Lake Bluff";
	string zipCode = "60044";

	// Print the persons information
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Street Address: " << streetAddress << endl;
	cout << "City: " << city << endl;
	cout << "Zip Code: " << zipCode << endl;

	return 0;
}
