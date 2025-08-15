/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:28:11 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/14 21:28:15 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main() {
    PhoneBook   phonebook;
    std::string command;

    std::cout << "Welcome to My Awesome PhoneBook!" << std::endl;
    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        // EOF (Ctrl+D) 입력을 처리하여 무한루프 방지
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
    std::cout << "Goodbye!" << std::endl;
    return 0;
}