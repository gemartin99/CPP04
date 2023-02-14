#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:

public:
	WrongCat(void);
	~WrongCat(void);
	WrongCat& operator=(const WrongCat &other);
	WrongCat(const WrongCat &copy);
	virtual void makeSound(void) const;
};

#endif