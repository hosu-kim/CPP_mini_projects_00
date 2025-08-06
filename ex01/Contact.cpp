/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:51:11 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/06 23:01:57 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
	: firstName(), lastName(), nickName(), phoneNumber(), darkestSecret()
{}

void Contact::setField(int fieldIndex, const std::string& value) {
	switch (fieldIndex) {
		case 0: firstName = value; break;
		case 1: lastName = value; break;
		case 2: nickName = value; break;
		case 3: phoneNumber = value; break;
		case 4: darkestSecret = value; break;
		default: break;
	}
}

const std::string& Contact::getField(int fieldIndex) const {
	switch (fieldIndex) {
		case 0: return firstName;
		case 1: return lastName;
		case 2: return nickName;
		case 3: return phoneNumber;
		case 4: return darkestSecret;
		default: return firstName;
	}
}

// Returns true if all field are filled.
bool Contact::isComplete() const {
	return !firstName.empty()
		&& !lastName.empty()
		&& !nickName.empty()
		&& !phoneNumber.empty()
		&& !darkestSecret.empty();
}