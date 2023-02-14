#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(void);
	virtual ~WrongAnimal(void);
	WrongAnimal& operator=(const WrongAnimal &other);
	WrongAnimal(const WrongAnimal &copy);
	virtual void makeSound(void) const;
	void setType(std::string newtype);
	std::string getType(void) const;
};

#endif