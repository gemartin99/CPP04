#include <iostream>

#include "Animal.hpp"

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Animal::Animal(const Animal &copy): type(copy.type)
{
	 std::cout << "Animal copy constructor called" << std::endl;
}

Animal::Animal(void) : type("Non")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal default destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal default sound" << std::endl;
}

void Animal::setType(std::string newtype)
{
	this->type = newtype;
}

std::string Animal::getType(void) const
{
	return this->type;
}