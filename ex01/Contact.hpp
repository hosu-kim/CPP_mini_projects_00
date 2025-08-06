/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:44:01 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/06 22:50:34 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

		public:
			Contact();

		/* FIELD INDEX 
	         0=First name,
		     1=Last name,
			 2=Nickname,
			 3=Phone number,
			 4=Darkest secret */
		void setField(int fieldIndex, const std::string& value);
		const std::string& getField(int fieldIndex) const;

		// Checks if all fields are filled.
		bool isComplete() const;
};

#endif