#include "Cat.hpp"

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Miau" << std::endl;
}