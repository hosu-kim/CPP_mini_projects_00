/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 18:25:11 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/17 00:13:16 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
private:
	Contact _contacts[8]; // The array of 8 contacts
	int     _nextIndex;
	int     _contactCount;

	/* Member functions inside private:
	   only called by other member functions and
	   cannot be called externally. */
	void _printItemFormatted(const std::string& str) const;
	void _displayContactDetails(int index) const;

public:
	PhoneBook();

	void addContact();
	void searchContacts() const;
};

#endif