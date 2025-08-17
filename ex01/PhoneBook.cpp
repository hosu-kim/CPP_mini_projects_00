/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 00:05:27 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/17 21:43:18 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

/**
 * @brief Constructs a new PhoneBook object.
 * @details Initializes the phonebook's internal state.
 *          1. `_contactCount` and `_nextIndex` are explicitly set to 0.
 *          2. The `_contacts` array is also initialized, with each `Contact`'s `std::string` members
 *             automatically set to empty strings by their default constructor,
 *             e.g., _firstName = ""
 */
PhoneBook::PhoneBook() : _nextIndex(0), _contactCount(0) {
}

/**
 * @brief Formats and prints a string to fit within a 10-character column.
 * @param str The string to be formatted and printed.
 * @details If the string is longer than 10 characters, it's truncated to 9 characters
 *          followed by a period ('.'). Otherwise, the string is left-aligned and
 *          padded with spaces to a width of 10 characters.
 * @note This is a const method, meaning it does not modify the object's state.
 *       Format: "str       "
 */
void PhoneBook::_printItemFormatted(const std::string& str) const {
	if (str.length() > 10) {
		// substr(): Extract a str from the original str.
		//               vvvvvv
		std::cout << str.substr(0, 9) << ".";
	} else {
		// std::left, setw(): Sets the width for the next output item (str) to 10 for left-alignment,
		// e.g., "str       " => 10 chars including str
		//                vvvv         vvvv
		std::cout << std::left << std::setw(10) << str;
	}
}

/** 
 * @brief Displays all details for a contact at a specific index.
 * @param index The index of the contact to display, provided by the user.
 * @details This function is called by searchContacts() to show the full record of a single contact.
 *          It first validates the index to prevent errors.
 * @note This is a const method, meaning it does not modify the object's state.
 *       Format: -------------------------------------------
 *               Index          : (1)
 *               First Name     : (First name)
 *               Last Name      : (Last name)
 *               Nickname       : (Nickname)
 *               Phone Number   : (Phone number)
 *               Darkest Secret : (Darkest secret)
 *               -------------------------------------------
 */
void PhoneBook::_displayContactDetails(int index) const {
	// Error handling when a wrong index is given. (Validation)
	if (index < 0 || index >= _contactCount) {
		/* std::endl: Inserts a newline and flushes the stream (output buffer),
		   ensuring the message is displayed immediately.
		                                        vvvvvvvvv*/
		std::cout << "Error: Invalid index." << std::endl;
		return; // == return (void);
	}

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Index          : " << index << std::endl;
	std::cout << "First Name     : " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name      : " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname       : " << this->_contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number   : " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << this->_contacts[index].getDarkestSecret() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
}

/**
 * @brief 
 */
void PhoneBook::addContact() {
	Contact     newContact;
	std::string input;

	/* std::cin.ignore(): it reads only the word (e.g., "ADD") in the main loop and
	   leaves the trailing newline character ('\n') in the input buffer.
	   This `ignore()` call is necessary to remove that newline, preventing the following `getline`
	   from immediately reading an empty line.
	vvvvvvvvvvvvvvvvv */
	std::cin.ignore();
	/* getline(): std::cin >> finishes accepting user input when it meets spaces, tabs, enters.
	   To prevent the problem, it is used.           vvvvvvv */
	while (std::cout << "Enter first name: " && std::getline(std::cin, input) && input.empty()) {
	// empty(): Checks if a string is empty.                                           ^^^^^
		if (std::cin.eof()) return;
		std::cout << "Field cannot be empty. Please try again." << std::endl;
	}
	if (std::cin.eof()) return;
	newContact.setFirstName(input);
//---------------------------------------------------------------------------------------------------
	while (std::cout << "Enter last name: " && std::getline(std::cin, input) && input.empty()) {
		if (std::cin.eof()) return;
		std::cout << "Field cannot be empty. Please try again." << std::endl;
	}
	if (std::cin.eof()) return;
	newContact.setLastName(input);
//---------------------------------------------------------------------------------------------------
	while (std::cout << "Enter nickname: " && std::getline(std::cin, input) && input.empty()) {
		if (std::cin.eof()) return;
		std::cout << "Field cannot be empty. Please try again." << std::endl;
	}
	if (std::cin.eof()) return;
	newContact.setNickname(input);
//---------------------------------------------------------------------------------------------------
	while (std::cout << "Enter phone number: " && std::getline(std::cin, input) && input.empty()) {
		if (std::cin.eof()) return;
		std::cout << "Field cannot be empty. Please try again." << std::endl;
	}
	if (std::cin.eof()) return;
	newContact.setPhoneNumber(input);
//---------------------------------------------------------------------------------------------------
	while (std::cout << "Enter darkest secret: " && std::getline(std::cin, input) && input.empty()) {
		if (std::cin.eof()) return;
		std::cout << "Field cannot be empty. Please try again." << std::endl;
	}
	if (std::cin.eof()) return;
	newContact.setDarkestSecret(input);
//---------------------------------------------------------------------------------------------------
	this->_contacts[this->_nextIndex] = newContact;
	this->_nextIndex = (this->_nextIndex + 1) % 8;
	if (this->_contactCount < 8) {
		this->_contactCount++;
	}

	std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContacts() const {
	if (this->_contactCount == 0) {
		std::cout << "PhoneBook is empty. Use ADD to save a new contact." << std::endl;
		return;
	}

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|" << std::left << std::setw(10) << "Index" << "|"
			  << std::left << std::setw(10) << "First Name" << "|"
			  << std::left << std::setw(10) << "Last Name" << "|"
			  << std::left << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < this->_contactCount; i++) {
		std::cout << "|" << std::left << std::setw(10) << i << "|";
		this->_printItemFormatted(this->_contacts[i].getFirstName());
		std::cout << "|";
		this->_printItemFormatted(this->_contacts[i].getLastName());
		std::cout << "|";
		this->_printItemFormatted(this->_contacts[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	int index = -1;
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> index;

	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Error: Invalid input. Please enter a numeric index." << std::endl;
	} else {
		this->_displayContactDetails(index);
	}
}