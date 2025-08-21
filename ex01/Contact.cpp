/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:25:57 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/21 18:37:35 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/* 8월 15일 18:20 리뷰 완료 */
// 8월 21일 18:37 리뷰

#include "Contact.hpp"

// Constructor is automatically called when an object is created,
// and it sets the initial values of the member variables.
// When Contact() is executed, the constructor std::string() is also 
// called then it initializes member variables to an empty string.
Contact::Contact() {
}

// Implementation of Setter functions
void Contact::setFirstName(std::string str) { _firstName = str; }
void Contact::setLastName(std::string str) { _lastName = str; }
void Contact::setNickname(std::string str) { _nickname = str; }
void Contact::setPhoneNumber(std::string str) { _phoneNumber = str; }
void Contact::setDarkestSecret(std::string str) { _darkestSecret = str; }

// Implementation of Getter functions
std::string Contact::getFirstName() const { return _firstName; }
std::string Contact::getLastName() const { return _lastName; }
std::string Contact::getNickname() const { return _nickname; }
std::string Contact::getPhoneNumber() const { return _phoneNumber; }
std::string Contact::getDarkestSecret() const { return _darkestSecret; }
