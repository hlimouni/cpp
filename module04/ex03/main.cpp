/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:53:44 by hlimouni          #+#    #+#             */
/*   Updated: 2022/02/28 00:56:16 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	/* Subject's tests */
	
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	/* Additional testing */
	
	// std::cout << "\n\nAdditional testiong\n" << std::endl;
	// IMateriaSource *source = new MateriaSource();
	
	// source->learnMateria(new Ice());
	// source->learnMateria(new Cure());
	// source->learnMateria(new Ice());
	// source->learnMateria(new Cure());
	// source->learnMateria(new Ice());
	
	// ICharacter *chter = new Character("chter");
	
	// chter->equip(source->createMateria("ice"));
	// chter->equip(source->createMateria("ice"));
	// chter->equip(source->createMateria("cure"));
	// chter->equip(source->createMateria("ice"));
	// chter->unequip(0);
	// chter->unequip(1);
	// chter->equip(source->createMateria("cure"));
	// chter->equip(source->createMateria("ice"));
	// chter->equip(source->createMateria("ice"));
	// {
	// 	std::cout << "Chter Copy behaviour" << std::endl;
	// 	ICharacter *copy = new Character(*static_cast<Character*>(chter));
	// 	copy->use(0, *copy);
	// 	copy->use(1, *copy);
	// 	copy->use(2, *copy);
	// 	copy->use(3, *copy);
	// 	delete copy;
	// }
	// std::cout << "\nchter behaviour" << std::endl;
	// chter->use(0, *chter);
	// chter->use(1, *chter);
	// chter->use(2, *chter);
	// chter->use(3, *chter);
	// delete source;
	// delete chter;
	return 0;
}