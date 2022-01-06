#include "Phonebook.hpp"
#include "Contact.hpp"

int main() {
	Phonebook	phonebook;
	std::string	command;

	while (true)
	{
		std::cout << "Input command: ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD") {
			std::string new_contact_data[5];
			std::cout << "ADD command has been chosen\n";
			std::cout << "Input First Name: ";
			std::getline(std::cin, new_contact_data[0]);
			std::cout << "Input Last Name: ";
			std::getline(std::cin, new_contact_data[1]);
			std::cout << "Input Nick Name: ";
			std::getline(std::cin, new_contact_data[2]);
			std::cout << "Input Phone Number: ";
			std::getline(std::cin, new_contact_data[3]);
			std::cout << "Input Your Darkest Secret : ";
			std::getline(std::cin, new_contact_data[4]);
			Contact new_contact {new_contact_data};
			phonebook.add_contact(new_contact);
			std::cout << "Done!" << std::endl;
		}
		else if (command == "SEARCH") {
			int	index {-1};
			phonebook.print_all();
			std::cout << "Input Contact Index: ";
			std::cin >> index;
			std::getline(std::cin, command);
			if (index < 0 || index >= phonebook.size()) {
				std::cout << "Wrong Index\n";
				continue ;
			}
			else {
				phonebook.get_contact(index).print_info();
				continue ;
			}
		}
		else {
			std::cout << "Wrong Command\n"
			<< "The available commands are:\n"
			<< "- ADD\n- SEARCH\n- EXIT\n";
		}
	}
	return 0;
}