#include "Cat.hpp"

Cat& Cat::operator=(const Cat &other)
{
	delete this->brain;
	this->brain = new Brain(*other.brain);
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Cat::Cat(const Cat &copy)
{
	this->brain = copy.brain;
	this->type = copy.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Miau" << std::endl;
}

void Cat::addIdea(std::string idea) const
{
	this->brain->addIdea(idea);
}

std::string Cat::getIdea(int i) const
{
	return this->brain->getIdea(i);
}