/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:25:42 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/15 18:39:17 by hoskim           ###   ########seoul.kr  */
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
		/* 1. Constructor: It's automatically called when an object is created,
		      and it sets the initial values of the member variables. If not, garbage values*/
		/* 2. When Contact() is executed, the constructor std::string() is also 
		      called then it initializes member variables to "" */
		Contact();

/* ============================== SETTER FUNCTIONS ============================== */
		// Set up contact information.
		void setFirstName(std::string str);         // Assigns the given str to _firstName.
		void setLastName(std::string str);          // Assigns the given str to _lastName.
		void setNickname(std::string str);          // Assigns the given str to _nickname.
		void setPhoneNumber(std::string str);       // Assigns the given str to _phoneNumber.
		void setDarkestSecret(std::string str);     // Assigns the given str to _darkestSecret.

/* ============================== GETTER FUNCTIONS =============================== */
		// Get contact information.
		// func() const: read only
		std::string getFirstName() const;           // Gets str from _firstName.
		std::string getLastName() const;            // Gets str from _lastName
		std::string getNickname() const;            // Gets str from _nickname.
		std::string getPhoneNumber() const;         // Gets str from _phoneNumber.
		std::string getDarkestSecret() const;       // Gets str from _darkestSecret.
};

#endif