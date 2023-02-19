#include "Brain.hpp"

Brain::Brain(void): size(0)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain &copy): size(copy.size)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) 
	{
        this->ideas[i] = copy.ideas[i];
    }
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	this->size = other.size;
	for (int i = 0; i < 100; i++) 
	{
        this->ideas[i] = other.ideas[i];
    }
	return *this;
}

int Brain::getSize(void) const
{
	return this->size;
}

void Brain::addIdea(std::string idea)
{
	int i = this->size;
	if (i < 100)
	{
		this->ideas[i] = idea;
		this->size++;
	}
}

std::string Brain::getIdea(int i) const
{
	if (i < 0 || i > 100)
		return NULL;
	return this->ideas[i];
}