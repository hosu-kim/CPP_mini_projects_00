// ex01/PhoneBook.hpp
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string> // string을 사용하므로 추가해주는 것이 안전합니다.

class PhoneBook {
private:
    // 멤버 변수 선언 순서
    Contact _contacts[8];
    int     _nextIndex;
    int     _contactCount;

    // <<<<< 여기!!! - 누락되었던 private 함수 선언 추가 >>>>>
    void _printFormatted(const std::string& str) const;
    void _displayContactDetails(int index) const;

public:
    PhoneBook();
    ~PhoneBook();

    void addContact();
    void searchContacts() const;
};

#endif