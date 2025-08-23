/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:00:58 by hoskim            #+#    #+#             */
/*   Updated: 2025/08/13 18:12:06 by hoskim           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // < std::cout
#include <cctype> // < std::toupper

int main(int argc, char *argv[])
{
	// 1. If these's no command line argument.
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}

	// 2. loops characters of arguments to capitalize and print them.
	for (int i = 1; i < argc; ++i) {
		for (int j = 0; argv[i][j] != '\0'; ++j) {
			unsigned char	uc = static_cast<unsigned char>(argv[i][j]); // a. Casting
			std::cout << static_cast<char>(std::toupper(uc)); // b. Capitaling
		}
	}
	std::cout << '\n';
	return (0);
}
