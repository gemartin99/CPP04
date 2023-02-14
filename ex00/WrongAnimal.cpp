#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy): type(copy.type)
{
	 std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(void) : type("Non")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal default sound" << std::endl;
}

void WrongAnimal::setType(std::string newtype)
{
	this->type = newtype;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}