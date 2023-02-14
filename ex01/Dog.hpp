#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
protected:

public:
	Dog(void);
	~Dog(void);
	virtual void makeSound(void) const;
	Dog& operator=(const Dog &other);
	Dog(const Dog &copy);
};

#endif