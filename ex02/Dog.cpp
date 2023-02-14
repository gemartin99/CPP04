#include "Dog.hpp"

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Dog::Dog(const Dog &copy)
{
	this->type = copy.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Guau" << std::endl;
}

void Dog::addIdea(std::string idea)
{
	this->brain->addIdea(idea);
}