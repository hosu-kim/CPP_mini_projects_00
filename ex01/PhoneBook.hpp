/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:10:23 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/07 16:13:00 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		nextIndex;
		int		totalCount;

	public:
		PhoneBook();

		void	add(const Contact& c);
		
		void	showSummary() const;
		
		const Contact*	getByIndex(int idx) const;
};

#endif