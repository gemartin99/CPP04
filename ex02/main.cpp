#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// const WrongAnimal* x = new WrongAnimal();
	// const WrongAnimal* y = new WrongCat();

	const Cat *a = new Cat();
	
	std::cout << "aaa1" << std::endl;
	a->addIdea("caca");
	a->getIdea(0);
	std::cout << "aaa" << std::endl;
	delete a;
	return 0;
}