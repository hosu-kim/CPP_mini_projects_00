/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:26:15 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/09 15:04:51 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"

int	main() {
	PhoneBook phonebook;
	std::string	cmd;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, cmd))
			break ;

		if (cmd == "ADD") {
			Contact	c;
			const char*	prompts[5] = {
				"First name", "Last name", "Nickname",
				"Phone number", "Darkest secret"
			};
			bool	abort = false;
			for (int i = 0; i < 5; ++i) {
				std::cout << prompts[i] << ": ";
				std::string	input;
				std::getline(std::cin, input);
				if (input.empty()) {
					std::cout << "Error: field cannot be empty. Aborting ADD.\n";
					abort = true;
					break ;
				}
				c.setField(i, input);
			}
			if (!abort && c.isComplete()) {
				phonebook.add(c);
				std::cout << "Contact added.\n";
			}
		}
		else if (cmd == "SEARCH") {
			phonebook.showSummary();
		}
	}
}
