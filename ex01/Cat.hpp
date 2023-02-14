#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
protected:

public:
	Cat(void);
	~Cat(void);
	Cat& operator=(const Cat &other);
	Cat(const Cat &copy);
	virtual void makeSound(void) const;
};

#endif