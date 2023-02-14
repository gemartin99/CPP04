#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal(void);
	virtual ~Animal(void);
	Animal& operator=(const Animal &other);
	Animal(const Animal &copy);
	virtual void makeSound(void) const = 0;
	void setType(std::string newtype);
	std::string getType(void) const;
};

#endif