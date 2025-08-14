/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:13:26 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/07 16:21:35 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

static std::string	formatColumn(const std::string& s) {
	if (s.size() > 10)
		return s.substr(0, 9) + ".";
	return std::string(10 - s.size(), ' ') + s;
}

PhoneBook::PhoneBook()
	: nextIndex(0), totalCount(0)
{}

void PhoneBook::add(const Contact& c) {
	contacts[nextIndex] = c;
	nextIndex = (nextIndex + 1) % 8;
	if (totalCount < 8)
		++totalCount;
}

void PhoneBook::showSummary() const {
	std::cout << formatColumn("Index") << "|"
			  << formatColumn("First Name") << "|"
			  << formatColumn("Last Name") << "|"
			  << formatColumn("Nickname") << "\n";
	for (int i = 0; i < totalCount; ++i) {
		std::stringstream ss;
		ss << i;
		std::cout << formatColumn(ss.str()) << "|"
				  << formatColumn(contacts[i].getField(0)) << "|"
				  << formatColumn(contacts[i].getField(1)) << "|"
				  << formatColumn(contacts[i].getField(2)) << "\n";
	}
}

const Contact* PhoneBook::getByIndex(int idx) const {
	if (idx < 0 || idx >= totalCount)
		return nullptr;
	return &contacts[idx];
}
