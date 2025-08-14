/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:44:01 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/09 20:41:41 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	// 아래의 변수들을 private에 넣는 이유는 setField()를 통해서만 접근 가능하게 하기 위함.
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact();

	enum Field {
		FIRST_NAME = 0,
		LAST_NAME = 1,
		NICK_NAME = 2,
		PHONE_NUMBER = 3,
		DARKEST_SECRET = 4
	};

	void setField(int fieldIndex, const std::string& value);
	const std::string& getField(int fieldIndex) const;

	// Checks if all fields are filled.
	bool isComplete() const;
};

#endif
