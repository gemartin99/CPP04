#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog(void);
	virtual ~Dog(void);
	void makeSound(void) const;
	Dog& operator=(const Dog &other);
	Dog(const Dog &copy);
	void addIdea(std::string idea);
};

#endif