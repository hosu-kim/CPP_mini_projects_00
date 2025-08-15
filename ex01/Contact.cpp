/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:25:57 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/15 18:20:32 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/* 8월 15일 18:20 리뷰 완료 */

#include "Contact.hpp"

// Definition of Contact() constructor
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
