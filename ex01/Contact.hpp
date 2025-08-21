/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:25:42 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/21 18:36:10 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/* 8월 14일 리뷰 완료 */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string> // std::string

class Contact {
	private:
/* ============================== MEMBER VARIABLES ============================== */
		/* Adds '_' before the member variables to distinguish them
           from local variables for readability. */
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		// Constructor (Contact) is automatically called when an object is created,
		// and it sets the initial values of the member variables.
		// When Contact() is executed, the constructor std::string() is also 
		// called then it initializes member variables to an empty string.
		Contact();

/* ============================== SETTER FUNCTIONS ============================== */
		// Set up contact information.
		void setFirstName(std::string str);
		void setLastName(std::string str);
		void setNickname(std::string str);
		void setPhoneNumber(std::string str);
		void setDarkestSecret(std::string str);

/* ============================== GETTER FUNCTIONS =============================== */
		// Get contact information.
		// func() const: read only
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

#endif