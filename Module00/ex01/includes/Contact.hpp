#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {
	private:
		std::string _firstName;
		std::string _lastNmae;
		std::string _nickname;
		std::string _darksetSecret;
		std::string _phonenumber;

	public:
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getDarksetSecret();
		std::string getPhonenumber();

		void setFirstName(std::string name);
		void setLastName(std::string lastName);
		void setNickname(std::string nickname);
		void setDarksetSecret(std::string secret);
		void setPhonenumber(std::string number);

		void printContact();
};

#endif
