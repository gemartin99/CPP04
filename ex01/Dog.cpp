#include "Dog.hpp"

Dog& Dog::operator=(const Dog &other)
{
	delete this->brain;
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Dog::Dog(const Dog &copy)
{
	this->brain = copy.brain;
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

std::string Cat::getIdea(int i) const
{
	return this->brain->getIdea(i);
}