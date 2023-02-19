#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* x = new WrongAnimal();
	const WrongAnimal* y = new WrongCat();

	const Cat *a = new Cat();
	const Cat *b = new Cat();
	std::cout << "aaa1" << std::endl;
	a->addIdea("caca");
	std::cout << "aaa" << std::endl;
	b = a;
	delete a;
	std::cout << "aaa2" << std::endl;
	b->getIdea(0);
	std::cout << "aaa3" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	x->makeSound();
	y->makeSound();
	delete meta;
	delete j;
	delete i;
	delete x;
	delete y;
	return 0;
}