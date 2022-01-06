#include "Phonebook.hpp"
#include "Contact.hpp"
#include <sstream>

int main() {
	Phonebook	phonebook;
	std::string	command;

	while (true) {
		std::cout << "Input command: ";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "EXIT")
			break ;
		else if (command == "ADD") {
			std::string new_contact_data[5];

			std::cout << "\n==========================[ADD]=============================\n\n";
			std::cout << "Input First Name: ";
			if (!std::getline(std::cin, new_contact_data[0]))
				break ;
			std::cout << "Input Last Name: ";
			if (!std::getline(std::cin, new_contact_data[1]))
				break ;
			std::cout << "Input Nick Name: ";
			if (!std::getline(std::cin, new_contact_data[2]))
				break ;
			std::cout << "Input Phone Number: ";
			if (!std::getline(std::cin, new_contact_data[3]))
				break ;
			std::cout << "Input Your Darkest Secret : ";
			if (!std::getline(std::cin, new_contact_data[4]))
				break ;
			std::cout << "\n============================================================\n";
			Contact new_contact(new_contact_data);
			phonebook.add_contact(new_contact);
			std::cout << std::setw(43) << "\n\t\t      Contact Added!\n\n";
		}
		else if (command == "SEARCH") {
			int			index(-1);
			std::string	line;

			std::cout << "\n=========================[SEARCH]===========================\n\n";
			if (phonebook.size() == 0) {
				std::cout << "        No Contacts\n\n";
				continue ;
			}
			phonebook.print_all();
			std::cout << '\n';
			std::cout << "Input Contact Index: ";
			if (!std::getline(std::cin, line))
				continue ;
			std::stringstream  linestream(line);
			linestream >> index;
			if (index < 1 || index > phonebook.size()) {
				std::cout << "\nWrong Index!\n\n";
				continue ;
			}
			else {
				phonebook.get_contact(index - 1).print_info();
				std::cout << '\n';
				continue ;
			}
		}
		else {
			std::cout << "\nWrong Command!\n\n"
			<< "* The available commands are:\n"
			<< "\t- ADD\n\t- SEARCH\n\t- EXIT\n\n";
		}
	}
	return 0;
}