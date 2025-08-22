/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:28:11 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/22 14:37:32 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

/**
 * @brief The main function and entry point of the PhoneBook application.
 * @details This function initializes a PhoneBook object and enters and infinite
 *          loop to process user commands. It handles "ADD", "SEARCH" and "EXIT"
 *          commands by calling the corresponding methods. The loop terminates
 *          on "EXIT" or when an End-Of-File (EOF) signal is received.
 * @return Returns 0 on successful execution.
 */
int main() {
	PhoneBook   phonebook;
	std::string command;

	std::cout << "Welcome to My Awesome PhoneBook!" << std::endl;
	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!(std::cin >> command)) {
			break;
		}

		if (command == "ADD") {
			phonebook.addContact();
		} else if (command == "SEARCH") {
			phonebook.searchContacts();
		} else if (command == "EXIT") {
			break;
		} else {
			std::cout << "Invalid command. Please try again." << std::endl;
		}
	}
	std::cout << "Goodbye! Na shledanou! Do widzenia! 안녕히 가세요! いってらっしゃいませ!" << std::endl;
	return 0;
}