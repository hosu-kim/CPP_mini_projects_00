// ex01/PhoneBook.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

// 생성자: 멤버 변수 초기화 순서를 .hpp 파일과 일치시킵니다.
// <<<<< 여기!!! - 초기화 순서 수정: _nextIndex 먼저, _contactCount 다음 >>>>>
PhoneBook::PhoneBook() : _nextIndex(0), _contactCount(0) {
}

PhoneBook::~PhoneBook() {
}

// private 헬퍼 함수: SEARCH 시 텍스트 형식을 맞춰 출력
void PhoneBook::_printFormatted(const std::string& str) const {
    if (str.length() > 10) {
        std::cout << str.substr(0, 9) << ".";
    } else {
        std::cout << std::setw(10) << str;
    }
}

// private 헬퍼 함수: 특정 인덱스의 연락처 전체 정보 출력
void PhoneBook::_displayContactDetails(int index) const {
    if (index < 0 || index >= _contactCount) {
        std::cout << "Error: Invalid index." << std::endl;
        return;
    }
    
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Index          : " << index << std::endl;
    std::cout << "First Name     : " << this->_contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name      : " << this->_contacts[index].getLastName() << std::endl;
    std::cout << "Nickname       : " << this->_contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number   : " << this->_contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret : " << this->_contacts[index].getDarkestSecret() << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

// 새 연락처를 추가하는 멤버 함수 (ADD 명령어 처리)
void PhoneBook::addContact() {
    Contact     newContact;
    std::string input;

    std::cin.ignore();
    while (std::cout << "Enter first name: " && std::getline(std::cin, input) && input.empty()) {
        if (std::cin.eof()) return;
        std::cout << "Field cannot be empty. Please try again." << std::endl;
    }
    if (std::cin.eof()) return;
    newContact.setFirstName(input);
    
    while (std::cout << "Enter last name: " && std::getline(std::cin, input) && input.empty()) {
        if (std::cin.eof()) return;
        std::cout << "Field cannot be empty. Please try again." << std::endl;
    }
    if (std::cin.eof()) return;
    newContact.setLastName(input);

    while (std::cout << "Enter nickname: " && std::getline(std::cin, input) && input.empty()) {
        if (std::cin.eof()) return;
        std::cout << "Field cannot be empty. Please try again." << std::endl;
    }
    if (std::cin.eof()) return;
    newContact.setNickname(input);

    while (std::cout << "Enter phone number: " && std::getline(std::cin, input) && input.empty()) {
        if (std::cin.eof()) return;
        std::cout << "Field cannot be empty. Please try again." << std::endl;
    }
    if (std::cin.eof()) return;
    newContact.setPhoneNumber(input);

    while (std::cout << "Enter darkest secret: " && std::getline(std::cin, input) && input.empty()) {
        if (std::cin.eof()) return;
        std::cout << "Field cannot be empty. Please try again." << std::endl;
    }
    if (std::cin.eof()) return;
    newContact.setDarkestSecret(input);
    
    this->_contacts[this->_nextIndex] = newContact;
    this->_nextIndex = (this->_nextIndex + 1) % 8;
    if (this->_contactCount < 8) {
        this->_contactCount++;
    }

    std::cout << "Contact added successfully!" << std::endl;
}

// 연락처를 검색하고 표시하는 멤버 함수 (SEARCH 명령어 처리)
void PhoneBook::searchContacts() const {
    if (this->_contactCount == 0) {
        std::cout << "PhoneBook is empty. Use ADD to save a new contact." << std::endl;
        return;
    }

    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < this->_contactCount; i++) {
        std::cout << "|" << std::setw(10) << i << "|";
        this->_printFormatted(this->_contacts[i].getFirstName());
        std::cout << "|";
        this->_printFormatted(this->_contacts[i].getLastName());
        std::cout << "|";
        this->_printFormatted(this->_contacts[i].getNickname());
        std::cout << "|" << std::endl;
    }
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    int index = -1;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Error: Invalid input. Please enter a numeric index." << std::endl;
    } else {
        this->_displayContactDetails(index);
    }
}