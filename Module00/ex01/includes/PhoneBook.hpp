#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	public:
		void add(int index);
		void search();

	private:
		Contact _contacts[8];
};

#endif
