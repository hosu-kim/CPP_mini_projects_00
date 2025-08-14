/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:51:11 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/14 13:01:25 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
	: firstName(), lastName(), nickName(), phoneNumber(), darkestSecret()
{}

void Contact::setField(int fieldIndex, const std::string& value) {
	switch (fieldIndex) {
		case FIRST_NAME: firstName = value; break;
		case LAST_NAME: lastName = value; break;
		case NICK_NAME: nickName = value; break;
		case PHONE_NUMBER: phoneNumber = value; break;
		case DARKEST_SECRET: darkestSecret = value; break;
		default: break;
	}
}

const std::string& Contact::getField(int fieldIndex) const {
	static const std::string empty;
	switch (fieldIndex) {
		case FIRST_NAME: return firstName;
		case LAST_NAME: return lastName;
		case NICK_NAME: return nickName;
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