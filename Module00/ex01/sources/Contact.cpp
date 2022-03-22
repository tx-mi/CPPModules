#include "Contact.hpp"

void Contact::setFirstName(std::string name) {
	this->_firstName = name;
}

void Contact::setLastName(std::string lastName) {
	this->_lastNmae = lastName;
}

void Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
}

void Contact::setDarksetSecret(std::string secret) {
	this->_darksetSecret = secret;
}

void Contact::setPhonenumber(std::string number) {
	this->_phonenumber = number;
}

std::string Contact::getFirstName() {
	return (this->_firstName);
}

std::string Contact::getLastName() {
	return (this->_lastNmae);
}

std::string Contact::getNickname() {
	return (this->_nickname);
}

std::string Contact::getDarksetSecret() {
	return (this->_darksetSecret);
}

std::string Contact::getPhonenumber() {
	return (this->_phonenumber);
}

void Contact::printContact() {
	std::cout << "First name : " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastNmae << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phonenumber<< std::endl;
	std::cout << "Darkest secret: " << this->_darksetSecret<< std::endl;
}
