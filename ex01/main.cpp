#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	const Cat *a = new Cat();
	//const Cat *b = new Cat();
	const Cat *c = new Cat();
	//std::cout << "aaa1" << std::endl;
	a->addIdea("caca");
	a->addIdea("caca2");
	a->addIdea("caca3");
	c->addIdea("de la vaca");
	//std::cout << "aaa" << std::endl;
	const Cat *b(a);
	// a = c;
	std::cout << c->getIdea(0) << std::endl;
	std::cout << a->getIdea(0) << std::endl;
	std::cout << b->getIdea(0) << std::endl;
	delete a;
	//std::cout << "aaa2" << std::endl;
	// b->getIdea(0);
	//std::cout << b->getIdea(0) << std::endl;
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// x->makeSound();
	// y->makeSound();
	//delete b;
	delete c;
	return 0;
}
