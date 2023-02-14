#include "WrongCat.hpp"

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	this->type = copy.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Miau...Wrong" << std::endl;
}